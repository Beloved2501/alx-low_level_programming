#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: variable for string
 * @c: the variable for character
 *
 * Return: Return null if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		return (&s[a]);
	}
	return (0);
}
