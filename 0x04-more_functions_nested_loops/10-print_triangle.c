#include "main.h"

/**
 * print_triangle - displays a triangle
 * @size: integer for size of triangle
 *
 * Return: Return void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
			_putchar(' ');
		for (k = i + j; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}
