#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t lists
 * @h: pointer pointing to the listint_t lists
 * Return: the size of list that was freed
 **/
size_t free_listint_safe(listint_t **h)
{
	int main;
	listint_t *tmp;
	size_t j;

	j = 0;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		main = *h - (*h)->next;

		if (main > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			j++;
		}
		else
		{
			free(*h);
			*h = NULL;
			j++;
			break;
		}
	}
	*h = NULL;
	return (j);
}
