#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: end of s2
 * Return: return pointer to memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strconcat;
	int a;
	unsigned int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;
	strconcat = malloc(sizeof(char) * (a + n + 1));
	if (strconcat == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		strconcat[a] = s1[a];
		a++;
	}
	while (b < n && s2[b] != '\0')
	{
		strconcat[a] = s2[b];
		a++; b++;
	}
	strconcat[a] = '\0';
	return (strconcat);
}
