#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that create an array of chars,
 * and initializes it with a char.
 * @size: size of an array
 * @c: variable to be initialized with
 * Return: Return pointer to the array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	a = 0;

	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
}
