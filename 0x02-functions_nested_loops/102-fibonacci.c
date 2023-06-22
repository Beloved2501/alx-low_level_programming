#include <stdio.h>

/**
 * main - Displays first 50 fibonacci numbers,
 * starting with 1 and 2,
 * separated by a comma followed by a space
 *
 * Return: Always in 0
 */
int main(void)
{
	int j;
	unsigned long a = 0, b = 1, sum;

	for (j = 0; j < 50; j++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (j == 50)
			printf("\n");
		else
		printf(",");
		printf(" ");
	}
	return (0);
}
