#include "main.h"

/**
 * _strlen - displays the length of a string
 * @s: pointer character for string
 * Return: Return void
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
