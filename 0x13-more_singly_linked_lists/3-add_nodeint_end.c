#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint_end  - adds a node at the end  of a listint_t list.
 * @head: pointer to the head of the list
 * @n: value of the node to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL; /* pointer to the new node to be added */
	listint_t *ptr = NULL; /* tranversing pointer */

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)   /* check if malloc erroed */
		return (ptr);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
		return (new_node);
	}
}
