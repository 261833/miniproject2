/**
 * @file activity2.c
 * @author PRACHI TANNA
 * @brief Activity 2: Interfacing ADC and generating waveform
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
 * @brief ADC initialize
 * 
 */
void init_adc(void)
{   ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);

}
/**
 * @brief Reading analog data from ADC 
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t read_adc(uint8_t ch)
{
    //adc channel select
    ADMUX &= 0xf8;
    ch=ch&0b00000111;
    ADMUX |= ch;
    //conversion
    ADCSRA |= (1<<ADSC);

 
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA |= (1<<ADIF);

    // returns the digital value corresponding to analog
    return (ADC);

}
/**
 * @brief If we have recieved the data from the ADC, we generate the duty cycle according to the 
 * digital value
 */
void ADC_interface(void)
{    
    init_pwm();
    init_pin_pwm();
    init_adc();
    DDRD &= ~(1<<PD0);     //PORTD0 input pin
    DDRC &= ~(1<<PC0);     //PORTC0 input pin
    DDRB |= (1<<PB1);      //PORTB1 output pin

    PORTB = 0x00;

    // if we have converted the data on ADC pin

    if((PIND & (1<<PD0)) == 1 )
    {
        PORTB |= (1<<PB1);
        read_adc(0);
        compare_adc();
        _delay_ms(200);     
    }
    else
    {
        ADCH=0x00;
        ADCL=0x00;
    }
}

