#include <stdio.h>

/**
 * print_array - displays array
 * @a: name of array
 * @n: index name
 * Return: Return void
 */
void print_array(int *a, int n)
{
	int j;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%d", a[0]);

	for (j = 1; j < n; j++)
	{
		printf(", %d", a[j]);
	}
	printf("\n");
}
