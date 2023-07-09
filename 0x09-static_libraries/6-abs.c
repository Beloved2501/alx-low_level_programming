#include "main.h"

/**
 * _abs - shows the absolute value of an integer.
 *
 * @n: number inputed for an integer.
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
