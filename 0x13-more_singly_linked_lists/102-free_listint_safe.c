#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t lists
 * @h: pointer pointing to the listint_t lists
 * Return: the size of list that was freed
 **/
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr;
	listint_t *tmp;
	size_t j;

	curr = *h;
	j = 0;

	while (curr != NULL)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
		j++;

		if (curr == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (j);
}
