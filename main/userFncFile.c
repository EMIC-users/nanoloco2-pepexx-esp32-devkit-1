#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "inc/userFncFile.h"
#include "inc/systemTimer.h"
#include "inc/led_led1.h"

void onReset()
{
    LEDs_led1_blink(500, 1000, 1000);
}



