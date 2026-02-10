#ifndef SYSTEM_TIMER_H_
#define SYSTEM_TIMER_H_

#include <stdint.h>
#include "inc/timer.h"

// getSystemMilis() is defined as #define in timer.h for ESP32
// On PIC, it's a real function backed by Timer4 interrupt

void systemTimeInit(void);

#endif

