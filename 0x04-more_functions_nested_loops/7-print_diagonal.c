#include "main.h"

/**
 * print_diagonal - displays a diagonal line on the terminal
 * @n: integer variable
 * Return: Return void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
