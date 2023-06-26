#include "main.h"

/**
 * print_rev - function that prints a string in reverse,
 * followed by a new line
 * @s: String variable
 * Return: Return void
 */
void print_rev(char *s)
{
	int a;
	int b;
	int size  = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		size++;
	}
	for (b = size - 1; b >= 0; j--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
