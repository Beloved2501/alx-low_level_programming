#include "lists.h"

/**
 * sum_listint - function that return the sum of all the data of a
 * listint_t linked list
 * @head: pointer variable
 * Return: Return 0 if the list is empty
 **/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr;

	sum = 0;
	curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
