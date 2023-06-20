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
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}

		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
