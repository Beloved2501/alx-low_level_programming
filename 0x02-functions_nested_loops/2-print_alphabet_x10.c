#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in 10 times
 *
 * Return: Always in 0
 */
void print_alphabet_x10(void)
{
	int i;
	int a;

	for (i = 0; i <= 10; i++)
	{
		for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
	}
}
