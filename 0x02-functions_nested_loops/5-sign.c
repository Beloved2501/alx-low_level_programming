#include "main.h"

/**
 * print_sign - knows  if the input number is
 * greater,less than zero or equal.
 *
 * @n: Input number for an integer
 *
 * Return: Return 1 as greater than zero, 0 iz zero,
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
