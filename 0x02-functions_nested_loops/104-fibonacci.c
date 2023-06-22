#include <stdio.h>

/**
 * main - fibonacci < 3
 *
 * Description - No hardcore
 *
 * Return: Return void (success)
 */
int main(void)
{
	unsigned long int j;
	unsigned long int old = 1;
	unsigned long int new = 2;
	unsigned long int m = 1000000000;
	unsigned long int old1;
	unsigned long int old2;
	unsigned long int new1;
	unsigned long int new2;

	printf("%lu", old);

	for (j = 1; j < 91; j++)
	{
		printf(", %lu", new);
		new += old;
		old = new - old;
	}
	old1 = (old / m);
	old2 = (old % m);
	new1 = (new / m);
	new2 = (new % m);

	for (j = 92; j < 99; ++j)
	{
		printf(", %lu", new1 + (new2 / m));
		printf("%lu", new2 % m);
		new1 = new1 + old1;
		old1 = new1 - old1;
		new2 = new2 + old2;
		old2 = new2 - old2;
	}
	printf("\n");
	return (0);
}
