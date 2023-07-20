#include "main.h"

/**
 * times_table - prints a table 9 times
 * Return:void
 */

void times_table(void)
{

int a = 0;
int b;
int count;
while (a <= 9)
{
	b = 0;
	while (b <= 9)
	{
		count = a * b;
		if (b == 0)
		{
			_putchar('0' + count);
		}
		else if (count < 10)
		{
			_putchar(' ');
			_putchar('0' + count);
		}
		else
		{
			_putchar('0' + count / 10);
			_putchar('0' + count % 10);
		}

		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		b++;
	}
	_putchar('\n');
	a++;
}
}
