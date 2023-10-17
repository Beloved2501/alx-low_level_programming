#include "main.h"

/**
 * _isdigit - Displays the digit from 0 through 9
 *
 * @c: Variable name
 *
 * Return: Return 1 if it is digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
