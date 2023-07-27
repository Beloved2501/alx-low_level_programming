#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - length of the string
 * @s: string variable
 * Return: Return the length of string
 **/
int _strlen(const char *s)
{
	int j;

	for (j = 0; s[j]; j++)
		;
	return (j);
}
/**
 * add_node - add new nodes at the beginning of a list
 * @head: pointer to the pointer to the head of list
 * @str: string to be duplicated and add to node
 * Return: address of new element or NULL if failed.
 **/
list_t *add_node(list_t **head, const char *str)
{
	int j, length;
	char *ptr;
	list_t *new_node;

	if (str == NULL || head == NULL)
		return (NULL);
	length = _strlen(str);
	new_node = *head;
	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ptr[j] = str[j];
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_node->str = ptr;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
