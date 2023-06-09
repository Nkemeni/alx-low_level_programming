#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint  - adds a node at the beginning  of a listint_t list.
 * @head: pointer to the head of the list
 * @n: value of the node to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)   /* check if malloc erroed */
		return (ptr);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
