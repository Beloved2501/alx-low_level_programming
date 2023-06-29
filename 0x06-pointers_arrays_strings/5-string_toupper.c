#include "main.h"

/**
 * string_toupper - converts all lowercase to uppercase
 * @p: variable pointer
 * Return: Return p
 */
char *string_toupper(char *p)
{
	int a;

	a = 0;
	while (p[a] != '\0')
	{
		if (p[a] >= 97 && p[a] >= 122)
			p[a] = p[a] - 32;
		a++;
	}
	return (p);
}
