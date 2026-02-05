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



