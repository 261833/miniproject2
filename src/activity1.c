#include <activity1.h>
#include <avr/io.h>

int main(void)
{

    DDRB |= (1<<PB0);
    DDRC &= ~(1<<PC0);
    PORTC |= (1<<PC0);
    while(1)
    {
     if ((PINC & (1<<PC0)) == 1)
        PORTB |= (1<<PB0);
     else
        PORTB &= ~(1<<PB0);
    }
    return 0;
}
