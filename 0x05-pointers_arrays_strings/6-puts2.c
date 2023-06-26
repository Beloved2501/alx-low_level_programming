#include "main.h"

/**
 * puts2 - display other character of string,
 * followed by new line
 * @str: pointer variable
 * Return: Return void
 */
void puts2(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
