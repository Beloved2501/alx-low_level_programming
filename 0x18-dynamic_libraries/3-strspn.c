#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: variable for string
 * @accept: contains bytes that may or may not compose parts of the string
 * Return: returns the nmber of bytes that compose the size
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int size;

	size = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++)
			;
		if (s[a] == accept[b])
			size++;
		if (accept[b] == '\0')
			return (size);
	}
	return (size);
}
