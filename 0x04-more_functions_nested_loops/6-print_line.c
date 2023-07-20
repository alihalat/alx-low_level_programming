#include "main.h"

/**
 * print_line - checks for a digit
 * @n : input integer to be printed
 * Return: void
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
