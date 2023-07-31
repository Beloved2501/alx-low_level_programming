#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a
 * linked listint_t.
 * @head: pointer pointing to the linked listint_t
 * Return: Return 0 if the linked list is empty
 **/
int pop_listint(listint_t **head)
{
	int j;
	listint_t *tmp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	j = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (j);
}
