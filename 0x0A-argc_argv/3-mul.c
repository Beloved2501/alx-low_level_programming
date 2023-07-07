#include <stdio.h>

/**
 * main - function that multiplies two numbers
 * @argc: argument counts
 * @argv: list of array pointing to the string
 * @atoi: convert strings to integer
 * Return: Return product or 1
 */
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;
	printf("%d\n", product);
	return (0);
}
