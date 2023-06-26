#include <stdio.h>
#include <string.h>

/**
 * rev_string - displays the function that reverse string
 * @s: Pointer variable
 * Return: Return void
 */
void rev_string(char *s)
{
	int size = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	for (j = 0; j < (size / 2); j++)
	{
		char rev = s[j];

		s[j] = s[size - 1 - j];
		s[size - 1 - j] = rev;
	}
}
