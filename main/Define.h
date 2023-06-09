/*
 * Define.h
 *
 *  Created on: Jan 9, 2021
 *      Author: M
 */

#ifndef MAIN_DEFINE_H_
#define MAIN_DEFINE_H_

#include "VOC.h"
#include "myLib.h"
#include <pmX.h>
#include <TempAndHum.h>

#define timeScheduleResouloution 15 //Sec
#define task_delay_ms(ms) vTaskDelay(ms / portTICK_PERIOD_MS)

#define DEFAULT_SENSOR_UPDATING_INTERVAL 15 //min
#define DEFAULT_SENSOR_DATARATE 2			//min
#define DEFAULT_SENSOR_CO2_ALARM 1000
#define DEFAULT_SENSOR_AIRQUALITY_ALARM (airPollutionClass) heavyPollutionAir
#define DEFAULT_SENSOR_PM1_ALARM 54
#define DEFAULT_SENSOR_PM25_ALARM 12
#define DEFAULT_SENSOR_PM10_ALARM 50

#define BLEMESH_SERVER_ENABLE_PROVISIONING_NOTIFY (1 << 0)


typedef enum
{
	offMode,
	autoMode,
	manualMode,
} unitMode_t;


typedef struct 
{
	uint8_t fanSpeed;
	unitMode_t mode : 8;
	int AQIValue;
} SensorMonitorData_t;

typedef enum
{
	sensor,
	unit,
	unitHub

} boardType_t;

// sensor setting
typedef struct
{
	pmXconcentration_t pmXAlarm;
	uint16_t co2Alarm;
	//	uint8_t  updatingInterval;		//in minutes
	uint8_t sensorDataRate; //in timeResouloution
	airPollutionClass airQualityAlarm : 8;

} sensorSetting_t;

// sensor data
typedef struct
{
	pmXconcentration_t pmX;
	int co2;
	uint32_t time; //time stamp
	airPollutionClass voc : 8;
	int8_t temp;
	int8_t humidity;

} sensorData_t;

typedef struct
{
	bool registered;
	uint8_t NUID[16];
	uint16_t unicastAddr;
	uint16_t subAddr;
	uint8_t uniqueId[13];
	boardType_t boardType;
	// uint8_t relayFeature;

} nodeInfo_t;

#endif /* MAIN_DEFINE_H_ */
