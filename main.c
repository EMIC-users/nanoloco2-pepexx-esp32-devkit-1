#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

#include "inc/system.h"
#include "inc/led_led1.h"
#include "inc/system_init.h"
#include "inc/userFncFile.h"

void app_main(void)
{
    initSystem();
    LEDs_led1_init();
    onReset();

    while(1)
    {
        vTaskDelay(1 / portTICK_PERIOD_MS);
    }
}

