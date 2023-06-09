/*
 * InternalStorage.c
 *
 *  Created on: Jan 6, 2020
 *      Author: M
 */

#include "internalStorage.h"
#include "board.h"
#include "esp_mac.h"

sensorSetting_t setting;
sensorData_t sensorData;
nodeInfo_t nodeInfo;
uint32_t intStorageNotif;
uint16_t dataToSend = 0;

static const char *TAG = "spiff_functions";

esp_vfs_spiffs_conf_t conf = {
	.base_path = "/spiffs",
	.partition_label = NULL,
	.max_files = 5,
	.format_if_mount_failed = true};

void storageInit(void)
{
	ESP_LOGI(TAG, "Initializing SPIFFS");

	// Use settings defined above to initialize and mount SPIFFS filesystem.
	// Note: esp_vfs_spiffs_register is an all-in-one convenience function.

	esp_err_t ret = esp_vfs_spiffs_register(&conf);

	if (ret != ESP_OK)
	{
		if (ret == ESP_FAIL)
		{
			ESP_LOGE(TAG, "Failed to mount or format filesystem");
		}
		else if (ret == ESP_ERR_NOT_FOUND)
		{
			ESP_LOGE(TAG, "Failed to find SPIFFS partition");
		}
		else
		{
			ESP_LOGE(TAG, "Failed to initialize SPIFFS (%s)", esp_err_to_name(ret));
		}
		return;
	}

	size_t total = 0, used = 0;
	ret = esp_spiffs_info(NULL, &total, &used);
	if (ret != ESP_OK)
	{
		ESP_LOGE(TAG, "Failed to get SPIFFS partition information (%s)", esp_err_to_name(ret));
	}
	else
	{
		ESP_LOGI(TAG, "Partition size: total: %d, used: %d", total, used);
	}
}

/**************************** sensor informations *********************************/

bool ReadSensorSetting(sensorSetting_t *sensorSetting)
{
	ESP_LOGI(TAG, "Reading sensorSetting file");
	FILE *f = fopen("/spiffs/sensorSetting.txt", "r");
	if (f == NULL)
	{
		ESP_LOGE(TAG, "Failed to open sensorSetting file for reading");
		return false;
	}

	fread(sensorSetting, 1, sizeof(sensorSetting_t), f);
	fclose(f);

	printf("sensorSetting successfully loaded.\r\n");

	return true;
}

bool writeSensorSetting(sensorSetting_t sensorSetting)
{
	ESP_LOGI(TAG, "Opening sensorSetting file");
	FILE *f = fopen("/spiffs/sensorSetting.txt", "w");
	if (f == NULL)
	{
		ESP_LOGE(TAG, "Failed to open sensorSetting file for writing");
		return false;
	}

	fwrite(&sensorSetting, 1, sizeof(sensorSetting_t), f);
	fclose(f);
	printf("sensorSetting successfully saved.\r\n");

	return true;
}

void setDefaultSensorSetting(sensorSetting_t *sensorSetting)
{
	sensorSetting->sensorDataRate = DEFAULT_SENSOR_DATARATE;
	sensorSetting->co2Alarm = DEFAULT_SENSOR_CO2_ALARM;
	sensorSetting->airQualityAlarm = DEFAULT_SENSOR_AIRQUALITY_ALARM;
	sensorSetting->pmXAlarm.pm1Concentration = DEFAULT_SENSOR_PM1_ALARM;
	sensorSetting->pmXAlarm.pm25Concentration = DEFAULT_SENSOR_PM25_ALARM;
	sensorSetting->pmXAlarm.pm10Concentration = DEFAULT_SENSOR_PM10_ALARM;
}

void formatPartition(void)
{
	esp_spiffs_format(NULL);
}

void printSensorSetting(sensorSetting_t setting)
{
	printf("< Sensor Setting >\r\n");

	printf("	sensorDataRate=%d\r\n", setting.sensorDataRate);
	printf("	co2Alarm=%d\r\n", setting.co2Alarm);
	printf("	airQualityAlarm=%d\r\n", setting.airQualityAlarm);
	printf("	pm1Alarm=%d\r\n", setting.pmXAlarm.pm1Concentration);
	printf("	pm2.5Alarm=%d\r\n", setting.pmXAlarm.pm25Concentration);
	printf("	pm10Alarm=%d\r\n", setting.pmXAlarm.pm10Concentration);
}

void printSensorData(sensorData_t data)
{

	ESP_LOGI(TAG, "Time: %ld, co2: %d, AQ: %d , pm1: %d, pm2.5: %d, pm10: %d, Temp: %d, Hum: %d, size: %d bytes", data.time, data.co2, data.voc, data.pmX.pm1Concentration, data.pmX.pm25Concentration, data.pmX.pm10Concentration, data.temp, data.humidity, sizeof(sensorData_t));
}

// set unique id

void setDefaultNodeInfo(nodeInfo_t *nodeInfo)
{

	// set unique id

	uint8_t mac_bytes[6];

	esp_efuse_mac_get_default(mac_bytes);
	sprintf((char *)nodeInfo->uniqueId, "%02x%02x%02x%02x%02x%02x", mac_bytes[0], mac_bytes[1], mac_bytes[2], mac_bytes[3], mac_bytes[4], mac_bytes[5]);

	// set board type

	nodeInfo->boardType = sensor;

	printf("Unique ID is : %s\r\n", nodeInfo->uniqueId);
	printf("Sensor Board\r\n");
}

// bool writeRelayFeatureState(void)
// {
// 	ESP_LOGD(TAG, "Opening Relay feature file");
// 	char fileName[50];
// 	sprintf(fileName, "/spiffs/Relay feature.txt");

// 	FILE *f = fopen(fileName, "w");
// 	if (f == NULL)
// 	{
// 		ESP_LOGE(TAG, "Failed to open Relay feature file for writing");
// 		return false;
// 	}

// 	fwrite(&nodeInfo.relayFeature, 1, sizeof(uint8_t), f);
// 	fclose(f);

// 	ESP_LOGD(TAG, "Relay feature successfully saved.\r");

// 	return true;
// }

// bool readRelayFeatureState(void)
// {
// 	ESP_LOGD(TAG, "Opening Relay feature file");
// 	char fileName[50];
// 	sprintf(fileName, "/spiffs/Relay feature.txt");

// 	FILE *f = fopen(fileName, "r");
// 	if (f == NULL)
// 	{
// 		ESP_LOGE(TAG, "Failed to open Relay feature file for reading");
// 		return false;
// 	}

// 	fread(&nodeInfo.relayFeature, 1, sizeof(uint8_t), f);
// 	fclose(f);
// 	ESP_LOGD(TAG, "Relay feature successfully loaded.\r");
// 	return true;
// }

void internalStorageTask(void *pvParameters)
{

	while (1)
	{
		xTaskNotifyWait(0, ULONG_MAX, &intStorageNotif, portMAX_DELAY);

		if (intStorageNotif & INTSTORAGE_WRITE_SENSOR_SETTING_NOTIF)
		{
			writeSensorSetting(setting);
		}
		if (intStorageNotif & INTSTORAGE_READ_SENSOR_SETTING_NOTIF)
		{
			ReadSensorSetting(&setting);
		}
		if (intStorageNotif & INTSTORAGE_WRITE_SENSOR_DATA_NOTIF)
		{
		}
		if (intStorageNotif & INTSTORAGE_READ_SENSOR_DATA_NOTIF)
		{
		}
	}
}

void initStorageVariables()
{
	storageInit();
	//	formatPartition();

	//	ReadBufferedDataNum(&dataToSend);

	if (!ReadSensorSetting(&setting))
	{
		setDefaultSensorSetting(&setting);
		writeSensorSetting(setting);
	}

	printSensorSetting(setting);
	setDefaultNodeInfo(&nodeInfo);

	// readRelayFeatureState();

	ledMode_t ledMode = 1 << green;
	xQueueSend(xQueueLedMode, &ledMode, (TickType_t)5000);
}
