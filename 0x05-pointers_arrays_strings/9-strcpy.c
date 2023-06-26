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
	int a;
	int size = 0;
	int i;
	char *dest_new = dest;

	for (i = 0; src[i] != '\0'; i++)
	{
		size++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[size(src)] = '\0';
	return (dest_new);
}
