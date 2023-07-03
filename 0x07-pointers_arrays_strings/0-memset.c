#include "main.h"

/**
 * _memset - fill memory with a constant bytes
 * @s: pointer to start memory filled
 * @b: variable name
 * @n:number of bytes
 *
 * Return: Return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}
