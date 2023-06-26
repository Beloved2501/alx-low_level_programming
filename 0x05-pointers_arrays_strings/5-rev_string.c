#include <string.h>
#include <stdio.h>

/**
 * rev_string - displays the function that reverse string
 * @s: pointer variable
 * Return: Return void
 */
void rev_string(char *s)
{
	int size = 0;
	int i, j;
	char rev = s[k];

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	for (j = 0; j < (size / 2); j++)
	{
		s[k] = s[size - 1 - j];
		s[size - 1 - j] = rev;
	}
}
