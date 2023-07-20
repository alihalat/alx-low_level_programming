#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return:void
 */

void jack_bauer(void)
{

int h;
int h1;
int m;
int m1;
int a = 9;

h1 = 0;
while (h1 <= 2)
{
	if (h1 == 2)
	{
		/*Restrain to 23h, not 29*/
		a = 3;
	}
	h = 0;
	while (h <= a)
	{
		m1 = 0;
		while (m1 <= 5)
		{
			m = 0;
			while (m <= 9)
			{
				_putchar('0' + h1);
				_putchar('0' + h);
				_putchar(':');
				_putchar('0' + m1);
				_putchar('0' + m);
				_putchar('\n');
				m++;
			}
			m1++;
		}
		h++;
	}
	h1++;
}
}
