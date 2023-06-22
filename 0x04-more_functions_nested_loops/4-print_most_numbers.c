#include "main.h"

/**
 * print_most_numbers - Displays numbers from 0-9,
 * except 2 and 4
 *
 * Return: Return void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
