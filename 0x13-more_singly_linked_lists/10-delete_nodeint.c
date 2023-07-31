#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index of a
 * listint_t linked list
 * @head: head of the linked list
 * @index: node that should be deleted, starts at 0
 * Return: 1 if it is successful and -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *previous;
	unsigned int j;

	if (*head == NULL)
	{
		return (-1);
	}

	previous = NULL;
	curr = *head;
	j = 0;

	while (curr != NULL && j < index)
	{
		previous = curr;
		curr = curr->next;
		j++;
	}

	if (curr == NULL)
	{
		return (-1);
	}
	if (previous == NULL)
	{
		*head = curr->next;
	} else
	{
		previous->next = curr->next;
	}
	free(curr);
	return (1);
}
