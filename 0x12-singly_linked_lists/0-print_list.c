#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * print_list - prints all elements of list_t list
 * @h: head of the linked list
 * Return: number of nodes in linked list
 */


size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		
		h = h->next;
	}

	return (count);
}


