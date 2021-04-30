/**
 * @file activity3.h
 * @author Prachi Tanna
 * @brief Header for activity 3
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__

#include <avr/io.h>
#include <util/delay.h>

void init_pwm(void);
void init_pin_pwm(void);
void compare_adc(void);

#endif
