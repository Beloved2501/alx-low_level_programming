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
	int a = 0;
	{
		while (*str != '\0')
		{
			_putchar(str[a]);
			a++;
		}
		_putchar('\n');
	}
}
