#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - functiono generate random valid
 * passwords for the program 101-crackme
 *
 * Return: Always in 0
 */
int main(void)
{
	int code[100];
	int a, addition, b;

	addition = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		code[a] = rand() % 78;
		addition += (code[a] + '0');
		putchar(code[a] + '0');
		if ((2772 - addition) - '0' < 78)
		{
			b = 2772 - addition - '0';
			addition += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
