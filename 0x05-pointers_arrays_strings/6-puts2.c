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
	char *p = str;
	int j;

	while (*p != '\0')
	{
		p++;
		size++;
	}
	i = size - 1;
	for (j = 0; j <= 1; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
