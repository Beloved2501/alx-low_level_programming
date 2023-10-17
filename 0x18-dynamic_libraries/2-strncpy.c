#include "main.h"

/**
 * _strncpy - to copy a string
 * @dest: firt string variable
 * @src: second string variable
 * @n: value of string
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
