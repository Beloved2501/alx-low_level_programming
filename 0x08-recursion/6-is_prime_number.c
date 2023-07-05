#include "main.h"

/**
 * sqtRecursive - prints square root recursively doing binary search
 * @n: given number
 * @j: comparison number
 * Return: 1 if not found sqrroot, else sqrroot
 */
intsSqtRecursive(int n, int j)
{
	if (n <= 0)
		return (-1);
	if (n * n == j)
		return (n);
	return (sqtRecursive(n - 1, j));
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
	return (sqtRecursive(n / 2, n));
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
