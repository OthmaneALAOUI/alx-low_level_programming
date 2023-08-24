#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the list_t list.
 *
 * Return: The number of nodes printed.
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
