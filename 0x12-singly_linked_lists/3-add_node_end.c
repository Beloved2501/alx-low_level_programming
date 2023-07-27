#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
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
 * _strdup - duplicate function for string
 * @src: source of string to duplicate
 * Return: pointer to malloc'd space with copied string
 */
void *_strdup(const char *src)
{
	int length, j;
	char *dest;

	length = _strlen(src);
	dest = malloc((length + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (j = 0; src[j]; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
/**
 * add_node_end - add new nodes to the end of the list
 * @head: Pointer to the pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *present;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	dupstr = _strdup(str);
	if (dupstr == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = dupstr;
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	present = *head;
	while (present->next != NULL)
		present = present->next;
	present->next = new_node;
	return (*head);
}
