#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: argument counts
 * @argv: list of array pointing to the string
 * Return: Return product of multiplication or 1
 */
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi: converts strings to integer */
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	product = a * b;
	printf("%d\n", product);
	return (0);
}
