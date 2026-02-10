#include "inc/systemTimer.h"

void systemTimeInit(void)
{
    // On ESP32, esp_timer is always running since boot
    // getSystemMilis() is mapped via #define to esp_timer_get_time() / 1000
    // No hardware timer initialization needed
}

