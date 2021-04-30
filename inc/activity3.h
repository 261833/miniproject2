#ifndef __ACTIVITY3_H_
#define __ACTIVITY3_H_

/*Macro Definitions*/
#define LED_PORT (PORTB)        //LED Port Number 
#define LED_PIN  (PORTB0)       //LED Pin number

#define seat_port (PORTD)       //Switch for seat Port Number
#define seat_pin (PORTD1)       //Switch for seat Pin Number

#define heater_port (PORTD)     //Switch for heater Port Number
#define heater_pin (PORTD0)     //Switch for heater Pin Number
   
#define PWM_PORT (PORTD)        //PWM Port Number
#define PWM_PIN (PORTD6)        //PWM Output Pin Number
#define PWM_Output (OCR0A)

#define LED_ON 	(0x01)			//LED state HIGH
#define LED_OFF	(0x00)			//LED state LOW

#define LED_ON_TIME     (20)    //LED ON time (in ms)
#define LED_OFF_TIME    (20)    //LED OFF time (in ms)

#define F_CPU 16000000UL 	    /**< Clock Frequency of MCU is 16 MHz */

/*Include files*/
#include <avr/io.h>
#include <util/delay.h>

/*Function Declaration*/
/**
 * @brief PWM Initialisation
 * 
 */
void pwm_init(void);

#endif  /** __ACTIVITY3_H_ */
