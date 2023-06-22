#include "main.h"

/**
 * more_numbers - displays numbers in 10 times
 *
 * Return: Return void
 */
void more_numbers(void)
{
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
				_putchar((k % 10) + '0');
		}
			_putchar('\n');
	}
}
