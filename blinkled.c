#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
void app_main(void)
{
	char *yesTask = pcTaskGetName(NULL);
	ESPLOGI(yesTask, "Starting up!");
	while (1){
		;;
	} 
}
