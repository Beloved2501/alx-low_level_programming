#include <stdio.h>

/**
 * print_diagsum - a function that prints the sum of the diagonal
 * of a square matrix or integers
 * @a: 2d array
 * @size: size x size of the square matrix
 *
 * Return: void
 */
void print_diagsum(int *a, int size)
{
	int b;
	int t1 = 0;
	int tr = 0;
	int l = size * size;

	for (b = 0; b < l; b += size + 1)
	{
		t1 += a[b];
	}
	for (a = size - 1; a < l - 1; a += size - 1)
	{
		tr += a[b];
	}
	printf("%d, %d\n", t1, tr);
}
