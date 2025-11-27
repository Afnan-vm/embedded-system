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
	DDRD=0b00000100;   // set DDD2 (PD2) AS OUTPUT  //
	
    
    while (1) 
    {
		PORTD=0b00000100; //SET PB2=1//
		_delay_ms(1000);
		PORTD=0b00000100; // SET PB2=0//
		_delay_ms(1000);
		
    }
}

