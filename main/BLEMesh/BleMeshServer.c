/*
 * BleMeshServer.c
 *
 *  Created on: Feb 1, 2021
 *      Author: M
 */

/* main.c - Application main entry point */

/*
 * Copyright (c) 2017 Intel Corporation
 * Additional Copyright (c) 2018 Espressif Systems (Shanghai) PTE LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <bleMeshServer.h>

#ifdef CONFIG_BT_BLUEDROID_ENABLED
#include "esp_bt.h"
#include "esp_bt_main.h"
#include "esp_bt_device.h"
#endif

#ifdef CONFIG_BT_NIMBLE_ENABLED
#include "esp_nimble_hci.h"
#include "nimble/nimble_port.h"
#include "nimble/nimble_port_freertos.h"
#include "host/ble_hs.h"
#include "host/util/util.h"
#include "console/console.h"
#endif

static const char *BLETAG = "BLEServer";

#include "esp_ble_mesh_defs.h"

#define CID_ESP 0x02E5
#define CID_NVAL 0xFFFF

/* Sensor Property ID */

#define SENSOR_PROPERTY_ID_0 0x0056 /* Present Indoor Ambient Temperature */
#define SENSOR_PROPERTY_ID_1 0x005B /* Present Outdoor Ambient Temperature */

/* The characteristic of the two device properties is "Temperature 8", which is
 * used to represent a measure of temperature with a unit of 0.5 degree Celsius.
 * Minimum value: -64.0, maximum value: 63.5.
 * A value of 0xFF represents 'value is not known'.
 */
static int8_t indoor_temp = 40;	 /* Indoor temperature is 20 Degrees Celsius */
static int8_t outdoor_temp = 60; /* Outdoor temperature is 30 Degrees Celsius */

TaskHandle_t BLEMeshServerTask_h;
uint32_t BLEMeshServerNotif ;

#define SENSOR_POSITIVE_TOLERANCE ESP_BLE_MESH_SENSOR_UNSPECIFIED_POS_TOLERANCE
#define SENSOR_NEGATIVE_TOLERANCE ESP_BLE_MESH_SENSOR_UNSPECIFIED_NEG_TOLERANCE
#define SENSOR_SAMPLE_FUNCTION ESP_BLE_MESH_SAMPLE_FUNC_UNSPECIFIED
#define SENSOR_MEASURE_PERIOD ESP_BLE_MESH_SENSOR_NOT_APPL_MEASURE_PERIOD
#define SENSOR_UPDATE_INTERVAL ESP_BLE_MESH_SENSOR_NOT_APPL_UPDATE_INTERVAL

static uint8_t dev_uuid[ESP_BLE_MESH_OCTET16_LEN] = {0x32, 0x10};

static esp_ble_mesh_cfg_srv_t config_server = {
	.relay = ESP_BLE_MESH_RELAY_ENABLED,
	.beacon = ESP_BLE_MESH_BEACON_ENABLED,
#if defined(CONFIG_BLE_MESH_FRIEND)
	.friend_state = ESP_BLE_MESH_FRIEND_ENABLED,
#else
	.friend_state = ESP_BLE_MESH_FRIEND_NOT_SUPPORTED,
#endif
#if defined(CONFIG_BLE_MESH_GATT_PROXY_SERVER)
	.gatt_proxy = ESP_BLE_MESH_GATT_PROXY_ENABLED,
#else
	.gatt_proxy = ESP_BLE_MESH_GATT_PROXY_NOT_SUPPORTED,
#endif
	.default_ttl = 7,
	/* 3 transmissions with 20ms interval */
	.net_transmit = ESP_BLE_MESH_TRANSMIT(2, 20),
	.relay_retransmit = ESP_BLE_MESH_TRANSMIT(2, 20),
};

NET_BUF_SIMPLE_DEFINE_STATIC(sensor_data_0, 1);
NET_BUF_SIMPLE_DEFINE_STATIC(sensor_data_1, 1);

#ifdef CONFIG_BT_BLUEDROID_ENABLED
void ble_mesh_get_dev_uuid(uint8_t *dev_uuid)
{
	if (dev_uuid == NULL)
	{
		ESP_LOGE(BLETAG, "%s, Invalid device uuid", __func__);
		return;
	}

	/* Copy device address to the device uuid with offset equals to 2 here.
	 * The first two bytes is used for matching device uuid by Provisioner.
	 * And using device address here is to avoid using the same device uuid
	 * by different unprovisioned devices.
	 */
	memcpy(dev_uuid + 2, esp_bt_dev_get_address(), BD_ADDR_LEN);
}

esp_err_t bluetooth_init(void)
{
	esp_err_t ret;

	ESP_ERROR_CHECK(esp_bt_controller_mem_release(ESP_BT_MODE_CLASSIC_BT));

	esp_bt_controller_config_t bt_cfg = BT_CONTROLLER_INIT_CONFIG_DEFAULT();
	ret = esp_bt_controller_init(&bt_cfg);
	if (ret)
	{
		ESP_LOGE(BLETAG, "%s initialize controller failed", __func__);
		return ret;
	}

	ret = esp_bt_controller_enable(ESP_BT_MODE_BLE);
	if (ret)
	{
		ESP_LOGE(BLETAG, "%s enable controller failed", __func__);
		return ret;
	}
	ret = esp_bluedroid_init();
	if (ret)
	{
		ESP_LOGE(BLETAG, "%s init bluetooth failed", __func__);
		return ret;
	}
	ret = esp_bluedroid_enable();
	if (ret)
	{
		ESP_LOGE(BLETAG, "%s enable bluetooth failed", __func__);
		return ret;
	}

	return ret;
}
#endif /* CONFIG_BT_BLUEDROID_ENABLED */

#ifdef CONFIG_BT_NIMBLE_ENABLED
static SemaphoreHandle_t mesh_sem;
static uint8_t own_addr_type;
void ble_store_config_init(void);
static uint8_t addr_val[6] = {0};

void ble_mesh_get_dev_uuid(uint8_t *dev_uuid)
{
	if (dev_uuid == NULL)
	{
		ESP_LOGE(BLETAG, "%s, Invalid device uuid", __func__);
		return;
	}

	/* Copy device address to the device uuid with offset equals to 2 here.
	 * The first two bytes is used for matching device uuid by Provisioner.
	 * And using device address here is to avoid using the same device uuid
	 * by different unprovisioned devices.
	 */
	memcpy(dev_uuid + 2, addr_val, BD_ADDR_LEN);
}

static void mesh_on_reset(int reason)
{
	ESP_LOGI(BLETAG, "Resetting state; reason=%d", reason);
}

static void mesh_on_sync(void)
{
	int rc;

	rc = ble_hs_util_ensure_addr(0);
	assert(rc == 0);

	/* Figure out address to use while advertising (no privacy for now) */
	rc = ble_hs_id_infer_auto(0, &own_addr_type);
	if (rc != 0)
	{
		ESP_LOGI(BLETAG, "error determining address type; rc=%d", rc);
		return;
	}

	rc = ble_hs_id_copy_addr(own_addr_type, addr_val, NULL);

	xSemaphoreGive(mesh_sem);
}

void mesh_host_task(void *param)
{
	ESP_LOGI(BLETAG, "BLE Host Task Started");
	/* This function will return only when nimble_port_stop() is executed */
	nimble_port_run();

	nimble_port_freertos_deinit();
}

esp_err_t bluetooth_init(void)
{
	mesh_sem = xSemaphoreCreateBinary();
	if (mesh_sem == NULL)
	{
		ESP_LOGE(BLETAG, "Failed to create mesh semaphore");
		return ESP_FAIL;
	}

	ESP_ERROR_CHECK(esp_nimble_hci_and_controller_init());

	nimble_port_init();
	/* Initialize the NimBLE host configuration. */
	ble_hs_cfg.reset_cb = mesh_on_reset;
	ble_hs_cfg.sync_cb = mesh_on_sync;
	ble_hs_cfg.store_status_cb = ble_store_util_status_rr;

	/* XXX Need to have template for store */
	ble_store_config_init();

	nimble_port_freertos_init(mesh_host_task);

	xSemaphoreTake(mesh_sem, portMAX_DELAY);

	return ESP_OK;
}
#endif /* CONFIG_BT_NIMBLE_ENABLED */

static esp_ble_mesh_sensor_state_t sensor_states[2] = {
	/* Mesh Model Spec:
		 * Multiple instances of the Sensor states may be present within the same model,
		 * provided that each instance has a unique value of the Sensor Property ID to
		 * allow the instances to be differentiated. Such sensors are known as multisensors.
		 * In this example, two instances of the Sensor states within the same model are
		 * provided.
		 */
	[0] = {
		/* Mesh Model Spec:
				 * Sensor Property ID is a 2-octet value referencing a device property
				 * that describes the meaning and format of data reported by a sensor.
				 * 0x0000 is prohibited.
				 */
		.sensor_property_id = SENSOR_PROPERTY_ID_0,
		/* Mesh Model Spec:
				 * Sensor Descriptor state represents the attributes describing the sensor
				 * data. This state does not change throughout the lifetime of an element.
				 */
		.descriptor.positive_tolerance = SENSOR_POSITIVE_TOLERANCE,
		.descriptor.negative_tolerance = SENSOR_NEGATIVE_TOLERANCE,
		.descriptor.sampling_function = SENSOR_SAMPLE_FUNCTION,
		.descriptor.measure_period = SENSOR_MEASURE_PERIOD,
		.descriptor.update_interval = SENSOR_UPDATE_INTERVAL,
		.sensor_data.format = ESP_BLE_MESH_SENSOR_DATA_FORMAT_A,
		.sensor_data.length = 0, /* 0 represents the length is 1 */
		.sensor_data.raw_value = &sensor_data_0,
	},
	[1] = {
		.sensor_property_id = SENSOR_PROPERTY_ID_1,
		.descriptor.positive_tolerance = SENSOR_POSITIVE_TOLERANCE,
		.descriptor.negative_tolerance = SENSOR_NEGATIVE_TOLERANCE,
		.descriptor.sampling_function = SENSOR_SAMPLE_FUNCTION,
		.descriptor.measure_period = SENSOR_MEASURE_PERIOD,
		.descriptor.update_interval = SENSOR_UPDATE_INTERVAL,
		.sensor_data.format = ESP_BLE_MESH_SENSOR_DATA_FORMAT_A,
		.sensor_data.length = 0, /* 0 represents the length is 1 */
		.sensor_data.raw_value = &sensor_data_1,
	},
};

/* 20 octets is large enough to hold two Sensor Descriptor state values. */
ESP_BLE_MESH_MODEL_PUB_DEFINE(sensor_pub, 20, ROLE_NODE);
static esp_ble_mesh_sensor_srv_t sensor_server = {
	.rsp_ctrl.get_auto_rsp = ESP_BLE_MESH_SERVER_RSP_BY_APP,
	.rsp_ctrl.set_auto_rsp = ESP_BLE_MESH_SERVER_RSP_BY_APP,
	.state_count = ARRAY_SIZE(sensor_states),
	.states = sensor_states,
};

ESP_BLE_MESH_MODEL_PUB_DEFINE(sensor_setup_pub, 20, ROLE_NODE);
static esp_ble_mesh_sensor_setup_srv_t sensor_setup_server = {
	.rsp_ctrl.get_auto_rsp = ESP_BLE_MESH_SERVER_RSP_BY_APP,
	.rsp_ctrl.set_auto_rsp = ESP_BLE_MESH_SERVER_RSP_BY_APP,
	.state_count = ARRAY_SIZE(sensor_states),
	.states = sensor_states,
};

static esp_ble_mesh_model_t root_models[] = {
	ESP_BLE_MESH_MODEL_CFG_SRV(&config_server),
	ESP_BLE_MESH_MODEL_SENSOR_SRV(&sensor_pub, &sensor_server),
	ESP_BLE_MESH_MODEL_SENSOR_SETUP_SRV(&sensor_setup_pub, &sensor_setup_server),
};

static esp_ble_mesh_elem_t elements[] = {
	ESP_BLE_MESH_ELEMENT(0, root_models, ESP_BLE_MESH_MODEL_NONE),
};

static esp_ble_mesh_comp_t composition = {
	.cid = CID_ESP,
	.elements = elements,
	.element_count = ARRAY_SIZE(elements),
};

static esp_ble_mesh_prov_t provision = {
	.uuid = dev_uuid,
};

static void prov_complete(uint16_t net_idx, uint16_t addr, uint8_t flags, uint32_t iv_index)
{
	ESP_LOGI(BLETAG, "net_idx 0x%03x, addr 0x%04x", net_idx, addr);
	ESP_LOGI(BLETAG, "flags 0x%02d, iv_index 0x%08ld", flags, iv_index);
	//	board_led_operation(LED_G, LED_OFF);

	/* Initialize the indoor and outdoor temperatures for each sensor.  */
	net_buf_simple_add_u8(&sensor_data_0, indoor_temp);
	net_buf_simple_add_u8(&sensor_data_1, outdoor_temp);
}

static void example_ble_mesh_provisioning_cb(esp_ble_mesh_prov_cb_event_t event,
											 esp_ble_mesh_prov_cb_param_t *param)
{
	switch (event)
	{
	case ESP_BLE_MESH_PROV_REGISTER_COMP_EVT:
		ESP_LOGI(BLETAG, "ESP_BLE_MESH_PROV_REGISTER_COMP_EVT, err_code %d", param->prov_register_comp.err_code);
		break;
	case ESP_BLE_MESH_NODE_PROV_ENABLE_COMP_EVT:
		ESP_LOGI(BLETAG, "ESP_BLE_MESH_NODE_PROV_ENABLE_COMP_EVT, err_code %d", param->node_prov_enable_comp.err_code);
		break;
	case ESP_BLE_MESH_NODE_PROV_LINK_OPEN_EVT:
		ESP_LOGI(BLETAG, "ESP_BLE_MESH_NODE_PROV_LINK_OPEN_EVT, bearer %s",
				 param->node_prov_link_open.bearer == ESP_BLE_MESH_PROV_ADV ? "PB-ADV" : "PB-GATT");
		ledMode_t ledMode = (1 < blue) | (1 << yellow);
		xQueueSend(xQueueLedMode, &ledMode, (TickType_t)5000);
		break;
	case ESP_BLE_MESH_NODE_PROV_LINK_CLOSE_EVT:
		ESP_LOGI(BLETAG, "ESP_BLE_MESH_NODE_PROV_LINK_CLOSE_EVT, bearer %s",
				 param->node_prov_link_close.bearer == ESP_BLE_MESH_PROV_ADV ? "PB-ADV" : "PB-GATT");
		break;
	case ESP_BLE_MESH_NODE_PROV_COMPLETE_EVT:
		ESP_LOGI(BLETAG, "ESP_BLE_MESH_NODE_PROV_COMPLETE_EVT");
		prov_complete(param->node_prov_complete.net_idx, param->node_prov_complete.addr,
					  param->node_prov_complete.flags, param->node_prov_complete.iv_index);

		ledMode = (1 << green);
		xQueueSend(xQueueLedMode, &ledMode, (TickType_t)5000);
		break;
	case ESP_BLE_MESH_NODE_PROV_RESET_EVT:
		ESP_LOGI(BLETAG, "ESP_BLE_MESH_NODE_PROV_RESET_EVT");
		break;
	case ESP_BLE_MESH_NODE_SET_UNPROV_DEV_NAME_COMP_EVT:
		ESP_LOGI(BLETAG, "ESP_BLE_MESH_NODE_SET_UNPROV_DEV_NAME_COMP_EVT, err_code %d", param->node_set_unprov_dev_name_comp.err_code);
		break;
	default:
		break;
	}
}

static void example_ble_mesh_config_server_cb(esp_ble_mesh_cfg_server_cb_event_t event,
											  esp_ble_mesh_cfg_server_cb_param_t *param)
{
	if (event == ESP_BLE_MESH_CFG_SERVER_STATE_CHANGE_EVT)
	{
		switch (param->ctx.recv_op)
		{
		case ESP_BLE_MESH_MODEL_OP_APP_KEY_ADD:
			ESP_LOGI(BLETAG, "ESP_BLE_MESH_MODEL_OP_APP_KEY_ADD");
			ESP_LOGI(BLETAG, "net_idx 0x%04x, app_idx 0x%04x",
					 param->value.state_change.appkey_add.net_idx,
					 param->value.state_change.appkey_add.app_idx);
			ESP_LOG_BUFFER_HEX("AppKey", param->value.state_change.appkey_add.app_key, 16);
			break;
		case ESP_BLE_MESH_MODEL_OP_MODEL_APP_BIND:
			ESP_LOGI(BLETAG, "ESP_BLE_MESH_MODEL_OP_MODEL_APP_BIND");
			ESP_LOGI(BLETAG, "elem_addr 0x%04x, app_idx 0x%04x, cid 0x%04x, mod_id 0x%04x",
					 param->value.state_change.mod_app_bind.element_addr,
					 param->value.state_change.mod_app_bind.app_idx,
					 param->value.state_change.mod_app_bind.company_id,
					 param->value.state_change.mod_app_bind.model_id);
			break;
		case ESP_BLE_MESH_MODEL_OP_MODEL_SUB_ADD:
			ESP_LOGI(BLETAG, "ESP_BLE_MESH_MODEL_OP_MODEL_SUB_ADD");
			ESP_LOGI(BLETAG, "elem_addr 0x%04x, sub_addr 0x%04x, cid 0x%04x, mod_id 0x%04x",
					 param->value.state_change.mod_sub_add.element_addr,
					 param->value.state_change.mod_sub_add.sub_addr,
					 param->value.state_change.mod_sub_add.company_id,
					 param->value.state_change.mod_sub_add.model_id);

			break;
		case ESP_BLE_MESH_MODEL_OP_MODEL_PUB_SET:
			ESP_LOGI(BLETAG, "ESP_BLE_MESH_MODEL_OP_MODEL_PUB_SET");
			ESP_LOGI(BLETAG, "publish address is 0x%04x", param->value.state_change.mod_pub_set.pub_addr);

			break;
		default:
			break;
		}
	}
}

static void buildSensorDataJasonPacket(jsonPacket_t *jsonPacket, sensorData_t sensorData, nodeInfo_t nodeInfo)
{
	char unicastAddr[6], all_data[128];

	sprintf(unicastAddr, "%d", nodeInfo.unicastAddr);
	uint8_t len = sprintf(all_data, "%d:%d:%d:%d:%d:%d:%d", sensorData.temp, sensorData.humidity, sensorData.voc, sensorData.co2, sensorData.pmX.pm1Concentration, sensorData.pmX.pm25Concentration, sensorData.pmX.pm10Concentration);
	ESP_LOGW("BLE_SERVER", "len : %d", len);

	build_json_packet(jsonPacket, 2,
					  JsonDataUnicastAddress, unicastAddr,
					  "Data", all_data);
}

static void buildServerDescriptorJasonPacket(jsonPacket_t *jsonPacket, nodeInfo_t nodeInfo)
{

	char boardType[2], unicastAddr[6], subAddr[6];

	sprintf(boardType, "%d", nodeInfo.boardType);
	sprintf(unicastAddr, "%d", nodeInfo.unicastAddr);
	sprintf(subAddr, "%d", nodeInfo.subAddr);

	build_json_packet(jsonPacket, 4, JsonBoardType, boardType,
					  JsonDataUnicastAddress, unicastAddr,
					  JsonSubAddress, subAddr,
					  JsonUniqueID, nodeInfo.uniqueId);
}

// static void exportSensorSettingFromJson(sensorSetting_t *setting, char *rxBuffer, uint16_t len)
// {
// 	char buff[6];

// 	Get_Item_Value(JsonSensorSettingDataRate, buff);
// 	setting->sensorDataRate = atoi(buff);
// 	memset(buff, 0, sizeof(buff));

// 	Get_Item_Value(JsonSensorSettingCo2Alarm, buff);
// 	setting->co2Alarm = atoi(buff);
// 	memset(buff, 0, sizeof(buff));

// 	Get_Item_Value(JsonSensorSettingAirQualityAlarm, buff);
// 	setting->airQualityAlarm = atoi(buff);
// 	memset(buff, 0, sizeof(buff));

// 	Get_Item_Value(JsonSensorSettingPm1Alarm, buff);
// 	setting->pmXAlarm.pm1Concentration = atoi(buff);
// 	memset(buff, 0, sizeof(buff));

// 	Get_Item_Value(JsonSensorSettingPm25Alaram, buff);
// 	setting->pmXAlarm.pm25Concentration = atoi(buff);
// 	memset(buff, 0, sizeof(buff));

// 	Get_Item_Value(JsonSensorSettingPm10Alarm, buff);
// 	setting->pmXAlarm.pm10Concentration = atoi(buff);
// 	memset(buff, 0, sizeof(buff));
// }

static void exportSensorMonitorDataFromJson(char *rxBuffer, uint16_t len)
{
	char buff[6];

	Get_Item_Value("Md", buff);
	SensorMonitorData.mode = atoi(buff);
	memset(buff, 0, sizeof(buff));

	Get_Item_Value("FS", buff);
	SensorMonitorData.fanSpeed = atoi(buff);
	memset(buff, 0, sizeof(buff));

	Get_Item_Value("AQI", buff);
	SensorMonitorData.AQIValue = atoi(buff);
	memset(buff, 0, sizeof(buff));
}

static void bleMeshSendSensorData(esp_ble_mesh_sensor_server_cb_param_t *param)
{

	printf("< Sensor data sending > \r\n");

	esp_err_t err = 0;

	nodeInfo.boardType = sensor;
	nodeInfo.registered = true;
	nodeInfo.unicastAddr = param->ctx.recv_dst;
	nodeInfo.subAddr = 0xC000;

	char jsonBuff[serverDescriptorJsonPacketSize];
	jsonPacket_t jsonPacket = {.buff = jsonBuff, .len = 0};
	buildSensorDataJasonPacket(&jsonPacket, sensorData, nodeInfo);

	//	param->ctx.recv_dst=nodeInfo.subAddr;
	//	param->ctx.addr=0x0001;

	err = esp_ble_mesh_server_model_send_msg(param->model, &param->ctx,
											 ESP_BLE_MESH_MODEL_OP_SENSOR_STATUS, jsonPacket.len, (uint8_t *)jsonPacket.buff);
	if (err != ESP_OK)
	{
		ESP_LOGE(BLETAG, "Failed to send Sensor Descriptor Status");
	}
}

static void bleMeshSendServerDescriptor(esp_ble_mesh_sensor_server_cb_param_t *param)
{
	printf("Server Descriptor sending function \r\n");
	esp_err_t err = 0;

	nodeInfo.boardType = sensor;
	nodeInfo.registered = true;
	nodeInfo.unicastAddr = param->ctx.recv_dst;
	nodeInfo.subAddr = 0xC000;

	char jsonBuff[serverDescriptorJsonPacketSize];
	jsonPacket_t jsonPacket = {.buff = jsonBuff, .len = 0};
	buildServerDescriptorJasonPacket(&jsonPacket, nodeInfo);

	//	param->ctx.recv_dst=nodeInfo.subAddr;		//TODO 3: Must be replaced by a global define
	//	param->ctx.recv_dst=0x0001;
	err = esp_ble_mesh_server_model_send_msg(param->model, &param->ctx,
											 ESP_BLE_MESH_MODEL_OP_SENSOR_DESCRIPTOR_STATUS, jsonPacket.len, (uint8_t *)jsonPacket.buff);
	if (err != ESP_OK)
	{
		ESP_LOGE(BLETAG, "Failed to send Sensor Descriptor Status");
	}
}

static void example_ble_mesh_sensor_server_cb(esp_ble_mesh_sensor_server_cb_event_t event,
											  esp_ble_mesh_sensor_server_cb_param_t *param)
{
	ESP_LOGI(BLETAG, "Sensor server, event %d, src 0x%04x, dst 0x%04x, model_id 0x%04x",
			 event, param->ctx.addr, param->ctx.recv_dst, param->model->model_id);

	switch (event)
	{
	case ESP_BLE_MESH_SENSOR_SERVER_RECV_GET_MSG_EVT:
		switch (param->ctx.recv_op)
		{
		case ESP_BLE_MESH_MODEL_OP_SENSOR_DESCRIPTOR_GET:
			ESP_LOGI(BLETAG, "ESP_BLE_MESH_MODEL_OP_SENSOR_DESCRIPTOR_GET");
			bleMeshSendServerDescriptor(param);
			break;

		case ESP_BLE_MESH_MODEL_OP_SENSOR_GET:
			ESP_LOGI(BLETAG, "ESP_BLE_MESH_MODEL_OP_SENSOR_GET");
			bleMeshSendSensorData(param);
			break;
			// TODO 0: use these fucking shit opcodes to transmit bufferd data.
			//		case ESP_BLE_MESH_MODEL_OP_SENSOR_CADENCE_GET:
			//			ESP_LOGI(TAG, "ESP_BLE_MESH_MODEL_OP_SENSOR_CADENCE_GET");
			//			example_ble_mesh_send_sensor_cadence_status(param);
			//			break;
			//		case ESP_BLE_MESH_MODEL_OP_SENSOR_SETTINGS_GET:
			//			ESP_LOGI(TAG, "ESP_BLE_MESH_MODEL_OP_SENSOR_SETTINGS_GET");
			//			example_ble_mesh_send_sensor_settings_status(param);
			//			break;
			//		case ESP_BLE_MESH_MODEL_OP_SENSOR_SETTING_GET:
			//			ESP_LOGI(TAG, "ESP_BLE_MESH_MODEL_OP_SENSOR_SETTINGS_GET");
			//			example_ble_mesh_send_sensor_setting_status(param);
			//			break;
			//		case ESP_BLE_MESH_MODEL_OP_SENSOR_GET:
			//
			//			break;
			//		case ESP_BLE_MESH_MODEL_OP_SENSOR_COLUMN_GET:
			//			ESP_LOGI(TAG, "ESP_BLE_MESH_MODEL_OP_SENSOR_COLUMN_GET");
			//			example_ble_mesh_send_sensor_column_status(param);
			//			break;
			//		case ESP_BLE_MESH_MODEL_OP_SENSOR_SERIES_GET:
			//			ESP_LOGI(TAG, "ESP_BLE_MESH_MODEL_OP_SENSOR_SERIES_GET");
			//			example_ble_mesh_send_sensor_series_status(param);
			//			break;
		}
		break;
	case ESP_BLE_MESH_SENSOR_SERVER_RECV_SET_MSG_EVT:
		switch (param->ctx.recv_op)
		{
		case ESP_BLE_MESH_MODEL_OP_SENSOR_SETTING_SET_UNACK:
			ESP_LOGI(BLETAG, "ESP_BLE_MESH_MODEL_OP_SENSOR_SETTING_SET_UNACK");
			if (param->value.set.sensor_setting.setting_property_id == (uint16_t)timeSet)
			{
				ESP_LOGI(BLETAG, "Time Data: %s", (uint8_t *)param->value.set.sensor_setting.setting_raw->data);
				uint8_t buff[15];
				memcpy(buff, param->value.set.sensor_setting.setting_raw->data, param->value.set.sensor_setting.setting_raw->len);
				now = atoi((char *)buff);
				lastReadTime = now;
				ESP_LOGI(BLETAG, "Time has updated= %lld", now);
			}
			else if (param->value.set.sensor_setting.setting_property_id == (uint16_t)sensorSettingSet)
			{
				ESP_LOGI(BLETAG, "Sensor setting: %s", (uint8_t *)param->value.set.sensor_setting.setting_raw->data);

				// TODO 1: must be parse somewhere else like unit server
				Packet_Decode_Init((char *)param->value.set.sensor_setting.setting_raw->data, param->value.set.sensor_setting.setting_raw->len);
				exportSensorMonitorDataFromJson((char *)param->value.set.sensor_setting.setting_raw->data, param->value.set.sensor_setting.setting_raw->len);
				// exportSensorSettingFromJson(&setting, (char *)param->value.set.sensor_setting.setting_raw->data, param->value.set.sensor_setting.setting_raw->len);
				// xTaskNotify(intStorageTask_h, INTSTORAGE_WRITE_SENSOR_SETTING_NOTIF, eSetBits);
				ESP_LOGW(BLETAG, "Mode: %d, FanSpeed: %d, AQI:%d", SensorMonitorData.mode, SensorMonitorData.fanSpeed, SensorMonitorData.AQIValue);
			}

			break;
		default:
			ESP_LOGE(BLETAG, "Unknown Sensor Set opcode 0x%04ld", param->ctx.recv_op);
			break;
		}
		break;
	default:

		break;
	}
}

// static void setRelayFeature()
// {
// 	config_server.relay = nodeInfo.relayFeature;
// 	ESP_LOGW(BLETAG, "Relay feature state: %d", nodeInfo.relayFeature);
// 	root_models[0].user_data = &config_server;
// 	elements[0].sig_models = root_models;
// 	composition.elements = elements;
// 	composition.element_count = ARRAY_SIZE(elements);
// }

static esp_err_t ble_mesh_init(void)
{
	esp_err_t err;

	esp_ble_mesh_register_prov_callback(example_ble_mesh_provisioning_cb);
	esp_ble_mesh_register_config_server_callback(example_ble_mesh_config_server_cb);
	esp_ble_mesh_register_sensor_server_callback(example_ble_mesh_sensor_server_cb);

	// setRelayFeature();

	err = esp_ble_mesh_init(&provision, &composition);
	if (err != ESP_OK)
	{
		ESP_LOGE(BLETAG, "Failed to initialize mesh stack");
		return err;
	}

	ESP_LOGI(BLETAG, "BLE Mesh server initialized");

	return ESP_OK;
}

void BLEMeshServerTask(void *pvParameters)
{
	esp_err_t err;

	ESP_LOGI(BLETAG, "Initializing...");

	err = bluetooth_init();
	if (err)
	{
		ESP_LOGE(BLETAG, "esp32_bluetooth_init failed (err %d)", err);
		return;
	}

	ble_mesh_get_dev_uuid(dev_uuid);

	/* Initialize the Bluetooth Mesh Subsystem */
	err = ble_mesh_init();
	if (err)
	{
		ESP_LOGE(BLETAG, "Bluetooth mesh init failed (err %d)", err);
	}

	while (1)
	{
		xTaskNotifyWait(0, ULONG_MAX, &BLEMeshServerNotif, portMAX_DELAY);

		if (BLEMeshServerNotif & BLEMESH_SERVER_ENABLE_PROVISIONING_NOTIFY)
		{
			// ESP_LOGI(BLETAG, "Disabling relay node feature");
			// nodeInfo.relayFeature = 0;
			// writeRelayFeatureState();

			if (esp_ble_mesh_node_is_provisioned())
			{
				esp_ble_mesh_node_local_reset();
				ESP_LOGI(BLETAG, "Node is provisioned, Removing BLE mesh node information");
			}
			else
			{
				ESP_LOGI(BLETAG, "Node is not provisioned.");
			}

			esp_err_t err = ESP_OK;

			err = esp_ble_mesh_node_prov_enable(ESP_BLE_MESH_PROV_ADV);
			if (err != ESP_OK)
			{
				ESP_LOGE(BLETAG, "Failed to enable mesh node");
			}
			else
			{
				ESP_LOGE(BLETAG, "Node Provisioning link opened.");
			}
		}
	}
}
