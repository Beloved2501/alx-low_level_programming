#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a new memory space location
 * @str: string variable
 * Return: pointer to the array or null
 **/
char *_strdup(char *str)
{
	char *duplicate;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	duplicate = malloc(sizeof(char) * (a + 1));
	if (duplicate == NULL)
		return (NULL);
	while (str[b] != '\0')
	{
		duplicate[b] = str[b];
		b++;
	}
	return (duplicate);
}
