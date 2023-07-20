#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - functions to sum all arguments
 * @n: number of arguments
 * Return: Return 0 if n is 0 or return sum.
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int j;

	if (n == 0)
		return (0);
	va_start(args, n);

	sum = 0;
	for (j = 0; j < n; j++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
