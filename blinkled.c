#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/gpio.h"

void app_main(void)
{
	char *yesTask = pcTaskGetName(NULL);
	ESP_LOGI(yesTask, "Starting up!");
	gpio_reset_pin(26);
	gpio_set_direction(26, GPIO_MODE_OUTPUT);
	gpio_reset_pin(27);
	gpio_set_direction(27, GPIO_MODE_OUTPUT);
	while (1){
		gpio_set_level(26, 1);
		vTaskDelay(1000 / portTICK_PERIOD_MS);
		gpio_set_level(26, 0);
		gpio_set_level(27, 1);
		vTaskDelay(1000 / portTICK_PERIOD_MS);
		gpio_set_level(27, 0);


	} 
}
