#include "main.h"

/**
 * times_table - displays the times table 9 times
 *
 * Return: Return void
 */
void times_table(void)
{
	int a, b, result;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			result = a * b;

			if (result < 10)
				_putchar(result + '0');
		}
		else if
		{
			_putchar((result / 10) + '48');
			_putchar((result % 10) + '48');
		}
		if (a != 57)
		{
			_putchar('44');
			_putchar('32');
		}
		_putchar('\n');
	}
}
