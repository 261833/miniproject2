/**
 * @file activity4.h
 * @author Prachi Tanna
 * @brief Activity 4 header
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H__
#define ACTIVITY4_H__

#include <avr/io.h>
#include <util/delay.h>


void init_usart(uint16_t);
char read_usart();
void write_usart(char);
void send_usart(void);

#endif
