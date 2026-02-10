#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

#include "inc/system.h"
#include "inc/systemTimer.h"
#include "inc/led_led1.h"
#include "inc/system_init.h"
#include "inc/userFncFile.h"

void app_main(void)
{
    initSystem();
    systemTimeInit();
    LEDs_led1_init();
    onReset();

    while(1)
    {
        LEDs_led1_poll();
        vTaskDelay(1 / portTICK_PERIOD_MS);
    }
}

