#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that convert binary numbr to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if b is NULL or there is one or more
 * chars in the string b that is not 0 or 1.
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int output;
	int j;

	output = 0;
	j = 0;

	if (b == NULL)
		return (0);

	while (b[j] != '\0')
	{
		if (b[j] == '0' || b[j] == '1')
		{
			output = (output << 1) | (b[j] - '0');
				j++;
		}
		else
		{
			return (0);
		}
	}
	return (output);
}
