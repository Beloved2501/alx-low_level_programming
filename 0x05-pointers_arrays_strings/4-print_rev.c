#include "main.h"

/**
 * print_rev - function that prints a string in reverse,
 * followed by a new line
 * @s: String variable
 * Return: Return void
 */
void print_rev(char *s)
{
	int j;
	int size = 0;

	while (*s != '\0')
	{
		s++;
	}
	for (j = size - 1; j >= 0; j--)
	{
		_putchar(j--);
		_putchar(s[j]);
	}
	_putchar('\n');
}
