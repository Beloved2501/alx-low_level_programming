#include <stdio.h>

/**
 * main - entry point for all program
 *
 * Return: Always in 0
 */
int main(void)
{
	int m;

	for (m = 1; m < 100; m++)
		if (m % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", m);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
