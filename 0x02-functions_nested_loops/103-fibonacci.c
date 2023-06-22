#include <stdio.h>

/**
 * main - Finds and displays the sum of even valued terms
 * followed by a new line
 *
 * Return: Always in 0
 */
int main(void)
{
	int p;
	unsigned long int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (p = 1; p <= 33; ++p)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		c = a + b;
		a = b;
		b = c;
	}

	printf("%lu\n", sum);
	return (0);
}
