/*
 * blink.c
 *
 * Created: 27-11-2025 13:53:39
 * Author : afnan
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD=0b00000100;   // Set PB2 as output

	while (1)
	{
		PORTD=0b00000100;  // PB2 = HIGH
		_delay_ms(1000);

		PORTD=0b00000000; // PB2 = LOW
		_delay_ms(1000);
	}
}

