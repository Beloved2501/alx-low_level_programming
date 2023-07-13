#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory block using malloc and free
 * @ptr: memory previously allocated by malloc
 * @old_size: size of ptr memory allocated
 * @new_size: size of new momery block
 * Return: pointer to the allocated memory block
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *low_str;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	str = malloc(new_size);
	if (!str)
		return (NULL);
	low_str = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			str[a] = low_str[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			str[a] = low_str[a];
	}
	free(ptr);
	return (str);
}
