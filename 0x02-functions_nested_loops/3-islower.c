#include "main.h"

/**
 * _islower - displays 1 if the input is a
 * lowercase character. Different character, displays 0
 *
 * @c: Character for ASCII code
 *
 * Return: Return 1 for lowercase. 0 for another case.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
