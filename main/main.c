
#include "freertos/FreeRTOS.h"
#include "MainTask/mainTask.h"

void app_main(void)
{
	// esp_err_t err;

	esp_err_t ret = nvs_flash_init();
	if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
	{
		ESP_ERROR_CHECK(nvs_flash_erase());
		ret = nvs_flash_init();
	}

	//Initialize NVS

	ESP_ERROR_CHECK(ret);

	xTaskCreate(boardTask, "Board Task", 2048, NULL, 10 | portPRIVILEGE_BIT, NULL);
	task_delay_ms(1000);

	initStorageVariables();

	xTaskCreate(BLEMeshServerTask, "BLE Mesh Server Task", 4096, NULL, 10 | portPRIVILEGE_BIT, &BLEMeshServerTask_h);
	xTaskCreate(mainTask, "Main Task", 4096, NULL, 10 | portPRIVILEGE_BIT, &mainTask_h);

	xTaskCreatePinnedToCore(guiTask, "gui", 4096*2, NULL, 0, NULL, 1);

	StartTimeSchedule();

	while (1)
	{
		task_delay_ms(1000);
		//		printf("sensorData_t= %d,pmXconcentration_t= %d,airPollutionClass= %d\r\n",sizeof(sensorData_t),sizeof(pmXconcentration_t),sizeof(airPollutionClass));
	}
}
