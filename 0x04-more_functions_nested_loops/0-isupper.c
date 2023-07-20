#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: input integer
 * Return: 1 if inpput represent an uppercase character else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
