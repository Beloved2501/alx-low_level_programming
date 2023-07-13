#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory for an array using malloc
 * @nmemb: number of memory allocated
 * @size: size of memory allocated
 * Return: Return void
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		*(ptr + a) = 0;
	return ((void *)ptr);
}
