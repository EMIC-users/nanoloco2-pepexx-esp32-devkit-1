#ifndef ESP32_GPIO_H_
#define ESP32_GPIO_H_

#include "driver/gpio.h"

typedef enum {
    GPIO_OUTPUT,
    GPIO_INPUT,
} gpio_pinConfig_t;

typedef enum {
    GPIO_LOW,
    GPIO_HIGH,
    GPIO_TOGGLE
} gpio_state_t;

// Macros HAL - Implementacion para ESP32
#define HAL_GPIO_PinCfg(name, cfg_value) \
    do { \
        gpio_config_t io_conf = { \
            .pin_bit_mask = (1ULL << PIN_##name), \
            .mode = (cfg_value == GPIO_OUTPUT) ? GPIO_MODE_OUTPUT : GPIO_MODE_INPUT, \
            .pull_up_en = GPIO_PULLUP_DISABLE, \
            .pull_down_en = GPIO_PULLDOWN_DISABLE, \
            .intr_type = GPIO_INTR_DISABLE \
        }; \
        gpio_config(&io_conf); \
    } while(0)

#define HAL_GPIO_PinSet(name, value) \
    do { \
        if (value == GPIO_HIGH) { \
            gpio_set_level(PIN_##name, 1); \
        } else if (value == GPIO_LOW) { \
            gpio_set_level(PIN_##name, 0); \
        } else if (value == GPIO_TOGGLE) { \
            gpio_set_level(PIN_##name, !gpio_get_level(PIN_##name)); \
        } \
    } while(0)

#define HAL_GPIO_PinGet(name) gpio_get_level(PIN_##name)

#endif

