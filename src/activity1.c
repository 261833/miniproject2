#include "activity1.h"
/**
 * @brief To initialise the pins
 * 
 */
void init_pins(void){
    DDRD &= ~(1<<PD0);  // input switch
    DDRD &= ~(1<<PD1);  // input switch
    DDRB |= (1<<PB0);   // output switch
}
/**
 * @brief To check whether both the switches are ON, if yes, LED is turned ON
 * Else, LED is turned OFF
 * 
 */
void led_init(void){
    // If both switches on
    if(((PIND & (1<<PD0)) && (PIND & (1<<PD1))) == 1)
	{
        PORTB |= (1<<PB0);  // LED on
    }
    else
	{
        PORTB &= ~(1<<PB0); // LED off
    }
}
