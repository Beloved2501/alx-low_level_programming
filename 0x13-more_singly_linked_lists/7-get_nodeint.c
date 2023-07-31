#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: beginning of the node
 * @index: index of the node, starting at 0
 * Return: return NULL if the node does not exist
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *curr;

	j = 0;
	curr = head;

	while (curr != NULL && j < index)
	{
		curr = curr->next;
		j++;
	}
	return (curr);
}
