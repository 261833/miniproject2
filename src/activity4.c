/**
 * @file activity4.c
 * @author Prachi Tanna
 * @brief  USART communication
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

/**
 * @brief initialization of USART
 * 
 * @param ubrr_value 
 */
void init_usart(uint16_t ubrr_value)
{
    UBRR0H = (ubrr_value>>8) & 0x00ff;
    UBRR0L = ubrr_value;
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

/**
 * @brief Reading character recieved by USART
 * 
 * @return char 
 */
char read_usart()
{
    while(!(UCSR0A & (1<<RXC0)))
    {
    }
    return UDR0;
}

/**
 * @brief Sending data by USART
 * 
 * @param data 
 */
void write_usart(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {
    }
    UDR0 = data;
}


/**
 * @brief after reading the duty cycle value of PWM the temperature is decided and sent through USART
 * 
 */
void send_usart (void)
{
    init_usart(103);
    if(OCR0A == 50)
    {
        write_usart(20);
    }
    else if(OCR0A == 101)
    {
        write_usart(25);
    }
    else if(OCR0A == 178)
    {
        write_usart(29);
    }
    else if(OCR0A == 242)
    {
        write_usart(33);
    }
}

