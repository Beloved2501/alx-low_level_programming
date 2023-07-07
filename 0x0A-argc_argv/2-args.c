#include <stdio.h>

/**
 * main - function that prints all argument it received
 * @argc: arguments count
 * @argv: list of array pointing to the string
 * Return: Return void
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
