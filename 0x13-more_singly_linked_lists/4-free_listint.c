#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to listint_t
 * Return: Return void
 **/
void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *nxt_node;

	while (curr != NULL)
	{
		nxt_node = curr->next;
		free(curr);
		curr = nxt_node;
	}
}
