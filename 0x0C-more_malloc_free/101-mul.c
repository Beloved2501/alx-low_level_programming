#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - confirms if a string has a non-digit character
 * @s: string to be evaluated
 * Return: Return 0 if non-digit is found, 1 otherwise
 **/
int is_digit(char *s)
{
	int a = 0;
	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: Return the length of the string
 **/
int _strlen(char *s)
{
	int a = 0;
	
	while (s[a] != '\0')
	{
	a++;
	}
	return (a);
}
/**
 * errors - handles errors in the main
 **/
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive integers
 * @argc: argument counts
 * argv: array of arguments
 * Return: Return void
 **/
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, length, p, move, num1, num2, *product, b = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	length1 = _strlen(str1);
	length2 = _strlen(str2);
	length = length1 + length2 + 1;
	product = malloc(sizeof(int) * length);
	if (!product)
		return (1);
	for (p = 0; p <= length1 + length2; p++)
		product[p] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = str1[length1] - '0';
		move = 0;
		for (length2 = _strlen(str2) - 1; length2 >= 0; length2--)
		{
			num2 = str2[length2] - '0';
			move += product[length1 + length2 + 1] + (num1 * num2);
			product[length1 + length2 + 1] = move % 10; move /= 10;
		}
		if (move > 0)
			product[length1 + length2 + 1] += move;
	}
	for (p = 0; p < length - 1; p++)
	{
		if (product[p])
			b = 1;
		if(b)
			_putchar(product[p] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(product);
	return (0);
}
