/**
 * @file SeatHeatingApp.c
 * @author Prachi Tanna (you@domain.com)
 * @brief
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
 * @brief The integration of all the activities
 *
 * @return int
 */
int main(void)
{
    init_pins();
    while(1){

        led_init();           // GPIO interface
        ADC_interface();     // ADC and PWM interface
        send_usart();       // USART interface
        
    }
    return 0;
}
