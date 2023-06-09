/*
 * bleMesh.h
 *
 *  Created on: Feb 1, 2021
 *      Author: M
 */

#ifndef MAIN_BLEMESH_BLEMESHSERVER_H_
#define MAIN_BLEMESH_BLEMESHSERVER_H_

#include "define.h"
#include "internalStorage.h"
#include "JsonDefine.h"

#include "esp_ble_mesh_defs.h"
#include "esp_ble_mesh_common_api.h"
#include "esp_ble_mesh_networking_api.h"
#include "esp_ble_mesh_provisioning_api.h"
#include "esp_ble_mesh_config_model_api.h"
#include "esp_ble_mesh_sensor_model_api.h"
#include "esp_ble_mesh_local_data_operation_api.h"

extern TaskHandle_t BLEMeshServerTask_h;
extern uint32_t BLEMeshServerNotif ;

typedef enum
{
	unassingedSet,
	timeSet,
	unitStateSet,
	sensorSettingSet,
}serverSettingSetID_t;

void BLEMeshServerTask(void *pvParameters);

#endif /* MAIN_BLEMESH_BLEMESHSERVER_H_ */
