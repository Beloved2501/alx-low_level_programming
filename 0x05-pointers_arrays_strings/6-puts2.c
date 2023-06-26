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
	int size = 0;
	int i = 0;

	for (size = 0; str[size] != '\0'; size++)
	{
		size++;
	}
	
	i = size - 1;
	int m;

	for (m = 0; m <= 1; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');
}
