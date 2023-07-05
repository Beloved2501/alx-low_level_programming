#include "main.h"

/**
 * SqtRecursive - inputs square root recursively
 * @i: given number
 * @j: comparison number
 * Return: 1 if not found sqrroot, else sqrroot
 */
int sqtRecursive(int i, int j)
{
	if (i <= 0)
		return (-1);
	if (i * i == j)
		return (i);
	return (sqtRecursive(i - 1, j));
}
/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: given variable
 * Return: square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(i / 2, n));
}
/**
 * is_prime_number - confirms if a given number is prime
 * @n: given variable
 * Return: Return 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
