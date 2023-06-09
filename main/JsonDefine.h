/*
 * jsonDefine.h
 *
 *  Created on: Feb 6, 2021
 *      Author: M
 */

#ifndef MAIN_BLEMESH_BLEJSONDEFINE_H_
#define MAIN_BLEMESH_BLEJSONDEFINE_H_


#define JsonDataTime "ts"
#define JsonDataUnicastAddress "UAdd"
#define JsonDataTemperature "Temp"
#define JsonDataHumidity "Hum"
#define JsonDataCo2 "Co2"
#define JsonDataAirQuality "VOC"
#define JsonDataPm1Conc "Pm1"
#define JsonDataPm25Conc "Pm2.5"
#define JsonDataPm10Conc "Pm10"
#define JsonDataAQI "AQI"
#define JsonDataAQIRef "AQIRef"

#define JsonBoardType "BT"
#define JsonSubAddress "SAdd"
#define JsonUniqueID "UID"

#define JsonSensorSettingUpdateInterval "UI"
#define JsonSensorSettingDataRate "SR"
#define JsonSensorSettingCo2Alarm "Co2Al"
#define JsonSensorSettingAirQualityAlarm "AQAl"
#define JsonSensorSettingPm1Alarm "Pm1Al"
#define JsonSensorSettingPm25Alaram "Pm2.5Al"
#define JsonSensorSettingPm10Alarm "Pm10Al"

#define JsonSensorDataRequest "WApp"
#define JsonServerNumbers "ServerNum"
#define JsonUnitNumbers "UnitNum"
#define JsonSensorNumbers "SensorNum"
#define JsonServerInfo "ServerInfo"
#define JsonServerUID "ServerUID"

#define JsonUnitFilter1Hour "Fil1"
#define JsonUnitFilter2Hour "Fil2"
#define JsonUnitFilter3Hour "Fil3"

#define unitStateJsonPacketSize 128
#define serverDescriptorJsonPacketSize 512
#define sensorDataJsonPacketSize 512
#define unitDataJsonPacketSize 512
#define sysInfoJsonPacketSize 512
#define sensorTestJsonPacketSize 256

#endif /* MAIN_BLEMESH_BLEJSONDEFINE_H_ */
