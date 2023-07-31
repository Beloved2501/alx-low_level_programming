#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: variable to be used
 * Return: Return the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
