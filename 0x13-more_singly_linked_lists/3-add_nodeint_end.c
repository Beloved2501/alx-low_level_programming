#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new modes at the end of linked list
 * @head: pointer pointer to the new node
 * @n: variable to be added
 * Return: address of new element or NULL if failed.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if failed */
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		listint_t *curr = *head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}
	return (new_node);
}
