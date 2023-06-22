#include "main.h"

/**
 * print_line - function that draw a straight line
 * in the terminal
 * @n: Integer value for _
 *
 * Return: Return void
 */
void print_line(int n)
{
	char j;

	for (j = 0; j < n; j++)
		_putchar('_');
	_putchar('\n');
}
