/*
 * internalStorage.h
 *
 *  Created on: Jan 6, 2021
 *      Author: M
 */

#ifndef MAIN_INTERNALSTORAGE_INTERNALSTORAGE_H_
#define MAIN_INTERNALSTORAGE_INTERNALSTORAGE_H_

#include "myLib.h"
#include "define.h"
#include "mainTask.h"

#define MAXIMUM_DATA_BUFFER 5040

// Notifs

#define INTSTORAGE_WRITE_SENSOR_SETTING_NOTIF (1 << 0)
#define INTSTORAGE_READ_SENSOR_SETTING_NOTIF (1 << 1)
#define INTSTORAGE_WRITE_SENSOR_DATA_NOTIF (1 << 2)
#define INTSTORAGE_READ_SENSOR_DATA_NOTIF (1 << 3)
#define INTSTORAGE_WRITE_DEV_INFO_NOTIF (1 << 4)
#define INTSTORAGE_READ_DEV_INFO_NOTIF (1 << 5)

extern TaskHandle_t intStorageTask_h;

extern sensorSetting_t setting;
extern sensorData_t sensorData;
extern nodeInfo_t nodeInfo;

void storageInit(void);
void formatPartition(void);
void setSensorSettingToDefaultValues(sensorSetting_t *sensorSetting);
void internalStorageTask(void *pvParameters);
void printSensorSetting();
void initStorageVariables();
void printSensorData(sensorData_t data);
bool writeRelayFeatureState(void);
// bool readRelayFeatureState(void);

#endif /* MAIN_INTERNALSTORAGE_INTERNALSTORAGE_H_ */
