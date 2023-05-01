#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - add node to the end of linked list
 * @head: pointer to head of linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* create new node */
	list_t *ptr;

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /*check if strdup malloc errored */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* malloc for new node */
	if (new_node == NULL) /*check if malloc errored*/
		return (NULL);

	new_node->str = strdup(str); /* set node values */
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL) /* if there is no node in the list set this node as head*/
		*head = new_node;
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
	}
	return (new_node);
}
