#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new nodes at the begining of linked list
 * @head: pointer pointing to link list
 * @n: variable to add to list
 * Return: Return pointer pointing list
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc failed */
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
