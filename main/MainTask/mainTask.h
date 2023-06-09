/*
 * mainTask.h
 *
 *  Created on: Jan 10, 2021
 *      Author: M
 */

#ifndef MAIN_MAINTASK_MAINTASK_H_
#define MAIN_MAINTASK_MAINTASK_H_

#include "myLib.h"
#include "define.h"

#include "json.h"

#include <VOC.h>
#include <co2.h>
#include <internalStorage.h>
#include "../BLEMesh/bleMeshServer.h"
#include "TimeSchedule/timeSchedule.h"
#include "Board.h"
#include "UserInterface.h"

extern TaskHandle_t mainTask_h;
extern uint32_t mainTaskNotif;

extern uint16_t dataToSend;
extern uint32_t lastSentCompletedTime;

void mainTask(void *pvParameters);

extern SensorMonitorData_t SensorMonitorData;

#endif /* MAIN_MAINTASK_MAINTASK_H_ */
