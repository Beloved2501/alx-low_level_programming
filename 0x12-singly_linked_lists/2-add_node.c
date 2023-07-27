#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - length of the string
 * @s: string variable
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int j;

	for (j = 0; s[j]; j++)
		;
	return (j);
}
/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: number of element in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int j, length;
	char *inside;
	list_t *new_node;

	if (str == NULL || head == NULL)
		return (NULL);
	length = _strlen(str);
	new_node = *head;
	inside = malloc((length + 1) * sizeof(char));
	if (inside == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		inside[j] = str[j];
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = inside;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
