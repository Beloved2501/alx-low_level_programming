#include <stdio.h>

/**
 * main - Entry point of all program
 *
 * Return: Always in 0
 */
int main(void)
{
	long j, digit = 612852475143;

	for (j = 2; j <= digit; j++)
	{
		if (digit % j == 0)
		{
			digit = digit / j;
			j--;
		}
	}
	printf("%lu\n", j);
	return (0);
}
