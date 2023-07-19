#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of every program
 * @argc: Argument counts
 * @argv: Arguments vector
 * Return: Return 0
 **/
int main(int argc, char *argv[])
{
	int numBytes;
	int i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numBytes = atoi(argv[1]);
	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (i = 0; i < numBytes; i++)
	{
		printf("%02x", ptr[i]);
	}
	printf("\n");
	return (0);
}
