/*
 * taskSchedule.c
 *
 *  Created on: Jan 10, 2021
 *      Author: M
 */

#include "timeSchedule.h"

time_t now, lastReadTime;
struct tm *timeinfo;
TaskHandle_t timeSchedule_h;

static const char *TIMETAG = "[[TimeSchedule]]";

static void TimeSchedule()
{
	now += timeScheduleResouloution;
	timeinfo = localtime(&now);
	ESP_LOGI(TIMETAG, "Time: %s", ctime(&now));

	setting.sensorDataRate = 1;

	if (now - lastReadTime >= setting.sensorDataRate * timeScheduleResouloution)
	{
		xTaskNotify(mainTask_h, MAINTASK_READ_SENSORS_NOTIF, eSetBits);
		lastReadTime = now;
		printf("<Read Sensor Time>\r\n ");
	}

	//	if( now-lastSendTime >= setting.updatingInterval )
	//	{
	//		xTaskNotify(mainTask_h, MAINTASK_SEND_DATA_NOTIF, eSetBits);
	//		lastSendTime = now ;
	//		printf("<Send Data Time>\r\n");
	//	}
}

void StartTimeSchedule(void)
{

	const esp_timer_create_args_t periodic_timer_args = {
		.callback = &TimeSchedule,
		/* name is optional, but may help identify the timer when debugging */
		.name = "periodic"};

	esp_timer_handle_t periodic_timer;
	ESP_ERROR_CHECK(esp_timer_create(&periodic_timer_args, &periodic_timer));
	/* The timer has been created but is not running yet */

	/* Start the timers  every 1min */
	ESP_ERROR_CHECK(esp_timer_start_periodic(periodic_timer, timeScheduleResouloution * 1000000));
}
