#include <stdio.h>

/**
 * main - prints the name of file it was compiled from
 * with a new line.
 *
 * Return: Return 0
 **/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
