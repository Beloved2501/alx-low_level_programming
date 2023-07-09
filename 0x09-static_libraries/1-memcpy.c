#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied to
 * @n: number of bytes
 * Return: Return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	return (dest);
}
