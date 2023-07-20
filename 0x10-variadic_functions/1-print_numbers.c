#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - functions that prints number of arguments passed
 * @separator: strings to be seperated between numbers
 * @n: number of arguments
 * Return: Return void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && j < (n - 1))
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
