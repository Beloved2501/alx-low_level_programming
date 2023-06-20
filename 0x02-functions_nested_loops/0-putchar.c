#include "main.h"

/**
 * main - Entry point for all program
 *
 * Return: Always written in 0
 */

int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
