#include "main'h"

/**
 * sqtRecursive - print square root recursively doing binary search
 * @low: first number
 * @high: last number within the limit of number
 * @j: given variable number
 * Return: Return 1 if sqrroot not found, else sqrroot
 */
int sqtRecursive(int low, int high, int j)
{
	long middle;

	if (high >= low)
	{
		middle = low + (high - low) / 2;
		if (middle * middle == j)
			return (middle);
/* following binary speech */
		if (middle * middle > j)
			return (sqtRecursive(low, middle - 1, j));
		if (middle * middle < j)
			return (sqtRecursive(middle + 1, high, j));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: Variable number
 * Return: Return square root of n or -1
 */
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqtRecursive(2, n, n));
}
