/**
 * @file activity2.h
 * @author Prachi Tanna
 * @brief header file 2
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

#include <avr/io.h>     // header file for avr processors
#include <util/delay.h> // header for delay function

void init_adc(void);    // initialize adc
uint16_t read_adc(uint8_t ch);   // read the adc 
void ADC_interface(void);   // implementation of activity 2 & 3

#endif
