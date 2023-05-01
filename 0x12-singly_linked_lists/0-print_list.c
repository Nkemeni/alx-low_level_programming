#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: head of the linked list
 * Return: number of nodes in linked list
 */


size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h->next != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);

		h = h->next;
	}

	return (count);
}


