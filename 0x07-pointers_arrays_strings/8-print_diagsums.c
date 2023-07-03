#include <stdio.h>

/**
 * print_diagsums - a functions that print the sum of the diagonal
 * of a square matrix or integer
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: Return void
 */
void print_diagsums(int *a, int size)
{
	int b;
	int tl = 0;
	int tr = 0;
	int p = size * size;

	for (b = 0; b < p; b += size + 1)
	{
		tl += a[b];
	}
	for (b = size - 1; b < p - 1; b += size - 1)
	{
		tr += a[b];
	}
	printf("%d, %d\n", tl, tr);
}
