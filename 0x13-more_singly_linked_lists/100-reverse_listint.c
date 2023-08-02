#include "lists.h"

/**
 * reverse_listint - function that reverse listint_t linked list
 * @head: pointer pointing to the linked list
 * Return: Return listint_t
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt_node;
	listint_t *previous;

	nxt_node = NULL;
	previous = NULL;

	while (*head)
	{
		nxt_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nxt_node;
	}
	*head = previous;
	return (*head);
}
