#include "lists.h"

/**
 * listint_len - prints the number of elements in listint_t list
 * @h: variable to be used
 * Return: Return number of nodes
 **/
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
