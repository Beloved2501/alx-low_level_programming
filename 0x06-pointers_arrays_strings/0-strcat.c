#include "main.h"

/**
 * _strcat - concatenate two strings together
 * @dest: first string variable
 * @src: second string variable
 * Return: Return dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (dest[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
