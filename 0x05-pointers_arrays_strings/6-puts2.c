#include "main.h"
#include <stdio.h>

/**
 * puts2 - display other character of string,
 * followed by new line
 * @str: pointer to the string
 * Return: Return void
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
