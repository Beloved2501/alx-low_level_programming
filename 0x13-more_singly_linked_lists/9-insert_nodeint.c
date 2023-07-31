#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that insert a new node at a
 * given position
 * @head: pointer pointing to the linked list
 * @idx: list of where new node should be added
 * @n: variable of linked list
 * Return: address of new node or NULL if failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr;
	unsigned int j;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	j = 0;

	while (curr != NULL && j < idx - 1)
	{
		curr = curr->next;
		j++;
	}
	if (curr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = curr->next;
	curr->next = new_node;
	return (new_node);
}
