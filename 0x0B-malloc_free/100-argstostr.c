#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments to the program
 * @ac: argument count
 * @av: argument variable
 * Return: Return a pointer to a new string or NULL
 **/
char *argstostr(int ac, char **av)
{
	char *duplicate;
	int a, b, c, length;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
/* count the number of chars in each string */
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			length++;
		length++;
	}
	length++;

	duplicate = malloc(sizeof(char) * length);
	if (duplicate == NULL)
		return (NULL);

	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			duplicate[c++] = av[a][b];
		}
		duplicate[c++] = '\n';
	}
	duplicate[c] = '\0';
	return (duplicate);
}
