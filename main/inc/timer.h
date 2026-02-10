#ifndef ESP32_TIMER_H_
#define ESP32_TIMER_H_

#include "esp_timer.h"

// ESP32 compatibility: esp_timer_get_time() returns microseconds since boot
// Map to PIC-compatible millisecond interface via #define
#define getSystemMilis() ((uint32_t)(esp_timer_get_time() / 1000))

// PIC compatibility types (Timer4 callback pattern)
typedef void (*Timer4_Callbak_t)(void);

// On ESP32, system timer is always running - init is no-op
static inline void timer4_init(Timer4_Callbak_t callback) {
    (void)callback;
}

#endif

