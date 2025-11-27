/*
 * blink.c
 *
 * Created: 27-11-2025 12:06:36
 * Author : afnan
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
DDRB=0b00100000;   // set DDB5 (PB5) AS OUTPUT  //
    while (1) 
    {
		PORTB=0b00100000; //SET PB5=1//
		_delay_ms(3000);
		PORTB=0b00000000; // SET PB5=0//
		_delay_ms(3000);
		
    }
}

