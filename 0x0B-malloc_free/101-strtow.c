#include "main.h"
#include <stdlib.h>

/**
 * count_word - function that count number of words in string
 * @s: string to count
 * Return: Return number of words
 **/
int count_word(char *s)
{
	int count, a, b;

	count = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			b++;
		}
	}
	return (b);
}
/**
 * **strtow - splits strings into words
 * @str: string variable to string
 * Return: pointe to array of strings or NULL
 **/
char **strtow(char *str)
{
	char **marble, *ptr;
	int m, n = 0, length = 0, words, k = 0, low, high;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	marble = malloc(sizeof(char *) * (words + 1));
	if (marble == NULL)
		return (NULL);

	for (m = 0; m < length; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (k)
			{
				high = m;
				ptr = malloc(sizeof(char) * (k + 1));
				if (ptr == NULL)
					return (NULL);
				while (low < high)
					*ptr++ = str[low++];
				*ptr = '\0';
				marble[n] = ptr - k;
				n++;
				k = 0;
			}
		}
		else if (k++ == 0)
			low = m;
	}
	marble[n] = NULL;

	return (marble);
}
