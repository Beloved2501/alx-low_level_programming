#include <stdio.h>
#include <stdlib.h>

/**
 * main - functions that print minimu number of coins to make change
 * for a given amount of money
 * @argc: argument count
 * @argv: list of array pointing to the argument strings
 * Return: Return number of coins or 1
 */
int main(int argc, char *argv[])
{
	int cent, numCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	numCoins = 0;
	if (cent > 25)
	{
		while (cent >= 25)
			cent -= 25, numCoins++;
	}
	if (cent > 10 && cent < 25)
	{
		while (cent >= 10)
			cent -= 10, numCoins++;
	}
	if (cent > 5 && cent < 10)
	{
		while (cent >= 5)
			cent -= 5, numCoins++;
	}
	if (cent > 2 && cent < 5)
	{
		while (cent >= 2)
			cent -= 2, numCoins++;
	}
	if (cent == 1 || cent == 2 || cent == 5 || cent == 10 || cent == 25)
	{
		numCoins++;
	}
	printf("%d\n", numCoins);
	return (0);
}
