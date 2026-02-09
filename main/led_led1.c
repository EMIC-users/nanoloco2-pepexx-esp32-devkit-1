#include "inc/led_led1.h"
#include "inc/gpio.h"
#include "inc/pins.h"

static uint16_t blkLed_timerOn = 0;
static uint16_t blkLed_period = 0;
static uint16_t blkLed_times = 0;
static uint32_t blkLed_tStamp;

void LEDs_led1_init(void)
{
    HAL_GPIO_PinCfg(Led1, GPIO_OUTPUT);
    HAL_GPIO_PinSet(Led1, GPIO_LOW);
}


void LEDs_led1_blink(uint16_t timeOn, uint16_t period, uint16_t times)
{
    blkLed_timerOn = timeOn;
    blkLed_period = period;
    blkLed_times = times;
    blkLed_tStamp = esp_timer_get_time() / 1000; // ms
    HAL_GPIO_PinSet(Led1, GPIO_HIGH);
}

void LEDs_led1_poll(void)
{
    if (blkLed_times > 0)
    {
        uint32_t currentTime = esp_timer_get_time() / 1000;

        if ((currentTime - blkLed_tStamp) >= blkLed_period)
        {
            blkLed_tStamp = currentTime;
            blkLed_times--;
            HAL_GPIO_PinSet(Led1, GPIO_HIGH);
        }
        else if ((currentTime - blkLed_tStamp) >= blkLed_timerOn)
        {
            HAL_GPIO_PinSet(Led1, GPIO_LOW);
        }
    }
}

