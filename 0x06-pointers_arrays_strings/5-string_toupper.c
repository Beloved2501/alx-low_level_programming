#include "main.h"

/**
 * string_toupper - converts all lowercase to uppercase
 * @n: variable pointer
 * Return: Return n
 */
char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] >= 'z')
			n[a] = n[a] - ' ';
		a++;
	}
	return (n);
}
