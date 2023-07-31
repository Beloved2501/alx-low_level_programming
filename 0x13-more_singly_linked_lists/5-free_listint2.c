#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer pointing to listint_t list
 * Return: Return void
 **/
void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *nxt_node;

	if (head == NULL)
		return;
	curr = *head;

	while (curr != NULL)
	{
		nxt_node = curr;
		curr = curr->next;
		free(nxt_node);
	}
	*head = NULL;
}
