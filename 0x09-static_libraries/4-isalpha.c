#include "main.h"

/**
 * _isalpha - displays 1 if the input is c
 * letter. Different cases, displays 0
 *
 * @c: Character for ASCII code
 *
 * Return: Return 1 for letters. Return 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
