#include "main.h"

/**
 * print_last_digit - Displays the last digit
 *
 * @n: number inputed for an integer.
 *
 * Return: Return last digit.
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		n = -n;
	j = n % 10;
	if (j < 0)
		j = -j;

	_putchar(j + '0');
	return (j);
}
