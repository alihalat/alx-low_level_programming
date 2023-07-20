#include "main.h"

/**
 * _isalpha - check for f a character is an alphabet letter
 * @c : input character to check if is alphabet or not
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
