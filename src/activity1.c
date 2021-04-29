#include "activity1.h"

void chngledstate(uint8_t state)
{
	LED_PORT = (state << LED_PIN);	/* Switch State*/
}

void ledinit(void)					/* Configure LED Pin, heater pin and seat pin*/
{
	DDRB |= (1 << LED_PIN);			//Set B0 for LED
	DDRD &=~(1<<seat_pin);			//Clear bit for seat
	DDRD &=~(1<<heater_pin);		//Clear bit for heater
	
	seat_port|=(1<<seat_pin);		//Set bit for seat
	heater_port|=(1<<heater_pin);	//Set bit for heater
}
