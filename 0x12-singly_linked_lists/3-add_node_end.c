#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * _strlen - length of the string
 * @s: string variable
 * Return: Return length of the string
 **/
int _strlen(const char *s)
{
	int j;

	for (j = 0; s[j]; j++)
		;
	return (j);
}
/**
 * _strdup - recreating string duplication
 * @src: string to duplicate
 * Return: malloc space with copied string
 **/
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
 * add_node_end - Add new nodes to the end of the list
 * @head: pointer pointing to the head of the list
 * @str: string to be duplicated and add to new list
 * Return: address of new element or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;
	char *strduplicate;

	if (str == NULL)
		return (NULL);
	strduplicate = _strdup(str);
	if (strduplicate == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strduplicate;
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_node;
	return (*head);
}
