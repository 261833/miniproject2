/**
 * @file activity3.c
 * @author Prachi Tanna
 * @brief activity 3
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
 * @brief Initalize PWM
 * 
 */
void init_pwm(void)
{
    TCCR0A |= (1<<COM0A1)|(1<<WGM01)|(1<<WGM00);
    // Non inverting mode of pin PD6
    TCCR0B |= (1<<CS00);
}

/**
 * @brief Initialize PWM pins
 * 
 */
void init_pin_pwm(void)
{
    DDRD |= (1<<PD6);      // set PD6 for output
}

/**
 * @brief comparing the ADC data to decide the duty cycle
 * 
 */
void compare_adc(void)
{
    // changing duty cycle of waveform
    if (ADC>0 && ADC<200){
        OCR0A = 51;
    }
    else if(ADC > 210 && ADC < 500){
        OCR0A = 101;
    }
    else if(ADC > 510 && ADC < 700){
        OCR0A = 178;
    }
    else if (ADC > 710 && ADC < 1024){
        OCR0A = 242;
    }
}

