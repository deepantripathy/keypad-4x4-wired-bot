#include <avr/io.h>
#include <lcd.h>
#include <delay.h>

#define c1 PA4
#define c2 PA5
#define c3 PA6
#define c4 PA7

int main(void)
{
	DDRA=0x0F;
	PORTA=0xF0;
	lcd_init();
	
	DDRB=0xF0;
	PORTB=0x00;
	
	unsigned char x;
	lcd_gotoxy(0,3);
	lcd_string("press a key");
	
	while(1)
	{
		PORTA=0xF0;
		x=PINA;
		
		if(x!=0xF0);
		{
			check1();
			check2();
			check3();
			check4();
			
		}
	}
}

void check1()
{
	PORTA=0b11111110;
	delayms(10);
	if(bit_is_clear(PINA,c1))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('1');
		PORTB=0x60;
	}
	
	if(bit_is_clear(PINA,c2))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('2');
		PORTB=0xA0;
		
	}
	
	if(bit_is_clear(PINA,c3))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('3');
		PORTB=0x90;
		
	}
	
	if(bit_is_clear(PINA,c4))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('A');
		
	}
}

void check2()
{
	PORTA=0b11111101;
	delayms(10);
	if(bit_is_clear(PINA,c1))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('4');
		PORTB=0x20;
		
	}
	
	if(bit_is_clear(PINA,c2))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('5');
		PORTB=0x00;
	
	}
	
	if(bit_is_clear(PINA,c3))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('6');
		PORTB=0x80;
		
	}
	
	if(bit_is_clear(PINA,c4))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('B');
		
	}
}

void check3()
{
	PORTA=0b11111011;
	delayms(10);
	if(bit_is_clear(PINA,c1))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('7');
		
	}
	
	if(bit_is_clear(PINA,c2))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('8');
		PORTB=0x50;
		
	}
	
	if(bit_is_clear(PINA,c3))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('9');
		
	}
	
	if(bit_is_clear(PINA,c4))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('C');
		
	}
}

void check4()
{
	PORTA=0b1110111;
	delayms(10);
	if(bit_is_clear(PINA,c1))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('*');
		
	}
	
	if(bit_is_clear(PINA,c2))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('0');
		
	}
	
	if(bit_is_clear(PINA,c3))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('#');
		
	}
	
	if(bit_is_clear(PINA,c4))
	{
		lcd_gotoxy(0,3);
		lcd_string("key pressed");
		lcd_gotoxy(1,5);
		lcd_char('D');
		
	}
}














