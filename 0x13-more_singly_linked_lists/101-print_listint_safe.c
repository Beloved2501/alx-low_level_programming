#include "lists.h"
#include <stdio.h>

/**
 * listint_loop -counts the nodes
 * @head: pointer to the linked list
 * Return: Return 0 if there is no loop
 **/
size_t listint_loop(const listint_t *head)
{
	const listint_t *new;
	const listint_t *old;
	size_t j;

	if (head == NULL || head->next == NULL)
		return (0);
	new = head->next;
	old = (head->next)->next;

	while (old)
	{
		if (new == old)
		{
			new = head;
			j = 1;
			while (new != old)
			{
				j++;
				new = new->next;
				old = old->next;
			}
			new = new->next;
			while (new != old)
			{
				j++;
				new = new->next;
			}
			return (j);
		}
		new = new->next;
		old = (old->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer of linked list
 * Return: number of nodes in the list
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t j;
	size_t idx;

	j = listint_loop(head);
	idx = 0;

	if (j == 0)
	{
		for (; head != NULL; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < j; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (j);
}
