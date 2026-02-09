#ifndef LED_led1_H
#define LED_led1_H

#include <stdint.h>

void LEDs_led1_init(void);

void LEDs_led1_poll(void);


void LEDs_led1_blink(uint16_t, uint16_t, uint16_t);

#endif

