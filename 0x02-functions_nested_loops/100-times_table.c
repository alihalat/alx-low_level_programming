#include "main.h"

/**
 * print_times_table - prints n times a table starting with 0 index
 * @n : input of type integer (the n times that the table should be printed)
 * Return: void
 */

void print_times_table(int n)
{

int a = 0, count, b;

if (n < 0 || n > 15)
	return;

while (a <= n)
{
	for (b = 0; b <= n; b++)
	{
		count = a * b;
		if (b == 0)
			_putchar('0' + count);
		else if (count < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + count);
		}
		else if (count < 100)
		{
			_putchar(' ');
			_putchar('0' + count / 10);
			_putchar('0' + count % 10);
		}
		else
		{
			_putchar('0' + count / 100);
			_putchar('0' + (count - 100) / 10);
			_putchar('0' + count % 10);
		}
		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	a++;
}
}
