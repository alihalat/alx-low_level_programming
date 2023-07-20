#include "main.h"

/**
 * print_sign - check the sign of a number (positive or negative or zero)
 * @n : input number to check if is pos. or neg. or zero
 * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
int result;

if (n > 0)
{
	result = 1;
	_putchar('+');
}
else if (n == 0)
{
	result = 0;
	_putchar('0');
}
else
{
	result = -1;
	_putchar('-');
}

return (result);
}


