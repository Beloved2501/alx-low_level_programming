#include "main.h"

/**
 * _strncat - concatenates two strings using the most
 * n bytes from src.
 * @dest: first string variable
 * @src: second string variable
 * @n: value of string
 * Return: Return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
