#include "main.h"

/**
 * print_number - displays # using _putchar
 * @n: integer variable
 *
 * Return: Return void
 */
void print_number(int n)
{
	int i, j, k = 1, m = n % 10;

	n = / 10;
	i = n;
	if (m < 0)
	{
		m *= -1, i *= -1, n *= -1;
		_putchar('-');
	}
	if (i > 0)
	{
		while (i / 10 != 0)
		{
			i /= 10, k *= 10;
		}
		while (k > 0)
		{
			j = n / k;
			_putchar('0' + j);
			n -= j * k;
			k / 10;
		}
	}
	_putchar('0' + m);
	_putchar('\n');
}
