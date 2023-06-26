#include <stdio.h>
#include "main.h"
/**
 * puts_half - displays the half of a string
 * @str: variable to be evaluated
 * Return: Return void
 */
void puts_half(char *str)
{
	int size = 0;
	char *p = str;
	int a;

	while (*p != '\0')
	{
		p++;
		size++;
	}
	if (size % 2 == 0)
	{
		a = size / 2;
	}
	else
	{
		a = (size + 1) / 2;
	}
	for ( ; a < size ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
