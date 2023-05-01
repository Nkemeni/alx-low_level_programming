#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * list_len - prints the number of elements in list_t list
 * @h: head of the linked list
 * Return: number of nodes in linked list
 */


size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}


