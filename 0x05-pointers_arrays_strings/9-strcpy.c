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
	char *dest_new = dest;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[strlen(src)] = '\0';
	return (dest_new);
}
