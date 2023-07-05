#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n: variable number
 *
 * Return: Return the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
