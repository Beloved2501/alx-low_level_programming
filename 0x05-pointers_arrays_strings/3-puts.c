#include "main.h"
#include <unistd.h>

/**
 * _puts - displays the function of string,
 * followed by new line
 * @str: string varable
 * Return: Return void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
