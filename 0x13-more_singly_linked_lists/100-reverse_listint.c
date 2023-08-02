#include "lists.h"

/**
 * reverse_listint - function that reverse listint_t linked list
 * @head: pointer pointing to the linked list
 * Return: Return listint_t
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *curr;
	listint_t *nxt_node;

	previous = NULL;
	curr = *head;

	while (curr != NULL)
	{
		nxt_node = curr->next;
		curr->next = previous;
		previous = curr;
		curr = nxt_node;
	}
	*head = previous;
	return (*head);
}
