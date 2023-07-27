#include "lists.h"
#include <stddef.h>

/**
 * list_len - number of element in a list_t list
 * @h: pointer to the head of a list
 * Return: Return number of elements in the list
 **/
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
