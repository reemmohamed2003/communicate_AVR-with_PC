/*
 * main.c
 *
 * Created: 9/12/2024 1:03:42 AM
 *  Author: Reem MOhamed
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
#include "USART.h"
#include "LCD.h"
int main(void)
{
	UART_vInit(9600);
	LCD_vInit();
	char x;
	while(1)
	{
		x=UART_u8ReceiveData();
		LCD_vSend_char(x);
	}
}

