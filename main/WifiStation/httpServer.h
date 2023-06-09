
#ifndef MAIN_WIFISTATION_HTTPSERVER_H_
#define MAIN_WIFISTATION_HTTPSERVER_H_

#include "myLib.h"
#include "JsonDefine.h"
#include "internalStorage.h"

#define CONFIG_EXAMPLE_CONNECT_WIFI 1

#define AP_ESP_WIFI_SSID "iCare_SensorAccessPoint"
#define AP_ESP_WIFI_PASS "12345678"
#define AP_ESP_WIFI_CHANNEL 2

#define AP_MAX_STA_CONN 2

TaskHandle_t iCareSensorTest_h;

#endif /* MAIN_WIFISTATION_HTTPSERVER_H_ */
