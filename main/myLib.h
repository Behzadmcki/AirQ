/*
 * myLib.h
 *
 *  Created on: Jan 9, 2021
 *      Author: M
 */

#ifndef MAIN_MYLIB_H_
#define MAIN_MYLIB_H_

#define LOG_LOCAL_LEVEL ESP_LOG_VERBOSE

#include "stdbool.h"
#include <string.h>
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_netif.h"
#include "esp_timer.h"
#include "esp_err.h"
#include "esp_spiffs.h"
#include "lwip/err.h"
#include "lwip/sockets.h"
#include "lwip/sys.h"
#include <lwip/netdb.h>
#include <sys/param.h>
#include <sys/unistd.h>
#include <sys/stat.h>
#include "driver/uart.h"
#include "driver/gpio.h"
#include "driver/ledc.h"

#include "nvs_flash.h"
#include "Json.h"
#include "esp32/rom/ets_sys.h"
#include <esp_http_server.h>

#endif /* MAIN_MYLIB_H_ */
