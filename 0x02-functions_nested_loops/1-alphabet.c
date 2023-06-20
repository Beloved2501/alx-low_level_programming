#include "main.h"

/**
 * main - Entry point for all program
 *
 * Description: Print Alphabet in lowercase
 *
 * Return: Always in 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
