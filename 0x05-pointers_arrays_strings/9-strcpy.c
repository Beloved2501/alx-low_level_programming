#include <stdio.h>
#include "main.h"

/**
 * _strcpy - functions that coies string
 * @dest: variable to be evaluated
 * @src: variable to be evaluated
 * Return: Return void
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';
	return (dest);
}
