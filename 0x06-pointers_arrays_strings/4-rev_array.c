#include "main.h"

/**
 * reverse_array - reverse the array of an integer
 * @a: array value
 * @n: number of element of the array
 * Return: Return void
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
