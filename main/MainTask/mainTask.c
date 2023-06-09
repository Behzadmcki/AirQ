/*
 * mainTask.c
 *
 *  Created on: Jan 10, 2021
 *      Author: M
 */

#include "mainTask.h"

static const char *TAG = "MainTask";

uint32_t lastSentCompletedTime = 0;
bool meshConnectionStatus = false;
ledMode_t ledMode;
int not_connected_cnt = 0;

TaskHandle_t mainTask_h;
uint32_t mainTaskNotif;

SensorMonitorData_t SensorMonitorData;

void mainTask(void *pvParameters)
{

	vocSensorInit();
	Co2SesnorInit();
	pmXSesnorInit();
	// DHT11Init();

	xTaskNotify(mainTask_h, MAINTASK_READ_SENSORS_NOTIF, eSetBits);

	while (1)
	{
		xTaskNotifyWait(0, ULONG_MAX, &mainTaskNotif, portMAX_DELAY);

		if (mainTaskNotif & MAINTASK_READ_SENSORS_NOTIF)
		{
			int16_t temp = 0, hum = 0;
			sensorData.time = now - lastSentCompletedTime; //TODO check Shavad?
			sensorData.voc = vocSensorRead();
			sensorData.co2 = Co2ConcentrationRead();
			sensorData.pmX = pmXConcentrationRead();
			if (dht_read_data(DHT_TYPE_DHT11, TempAndHum_GPIO_PIN, &hum, &temp) == ESP_OK)
			{
				sensorData.humidity = (int8_t)(hum / 10);
				sensorData.temp = (int8_t)(temp / 10);
			}
			else
			{
				sensorData.humidity = -1;
				sensorData.temp = -1;
			}
			printSensorData(sensorData);

			if (sensorData.pmX.pm25Concentration != -1 && sensorData.pmX.pm10Concentration != -1)
			{
				if (sensorData.pmX.pm25Concentration < 30 && sensorData.pmX.pm10Concentration < 150)
				{
					ledMode = (1 << green);
					xQueueSend(xQueueLedMode, &ledMode, (TickType_t)5000);
				}
				else if (sensorData.pmX.pm25Concentration < 150 && sensorData.pmX.pm10Concentration < 350)
				{
					ledMode = (1 << pink) | (1 << off);
					xQueueSend(xQueueLedMode, &ledMode, (TickType_t)5000);
				}
				else
				{
					ledMode = (1 << red) | (1 << off);
					xQueueSend(xQueueLedMode, &ledMode, (TickType_t)5000);
				}
			}
		}
	}
}
