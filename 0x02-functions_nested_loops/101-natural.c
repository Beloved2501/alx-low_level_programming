#include <stdio.h>

/**
 * main - Displays natural numbers below 1024 that are
 * multiple of 3 or 5
 *
 * Return: Always in 0
 */
int main(void)
{
	int m, n;

	for (m = 1; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
			n += m;
	}
	printf("%d\n", n);
	return (0);
}
