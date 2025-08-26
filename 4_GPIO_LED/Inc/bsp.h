#ifndef __BSP_H_
#define __BSP_H_
#include <stdbool.h>

void led_init(void);
void push_init(void);
void led_low(void);
void led_high(void);
bool get_btn_state(void);
#endif
