/*
 * taskSchedule.h
 *
 *  Created on: Jan 10, 2021
 *      Author: M
 */

#ifndef MAIN_TIMESCHEDULE_TIMESCHEDULE_H_
#define MAIN_TIMESCHEDULE_TIMESCHEDULE_H_

#include "myLib.h"
#include "mainTask.h"


#define	MAINTASK_READ_SENSORS_NOTIF					(1 << 0)
#define MAINTASK_SEND_DATA_NOTIF					(1 << 1)

extern TaskHandle_t timeSchedule_h;
extern time_t now,lastReadTime;

void StartTimeSchedule(void);


#endif /* MAIN_TIMESCHEDULE_TIMESCHEDULE_H_ */
