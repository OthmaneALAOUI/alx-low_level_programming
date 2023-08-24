#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the list_t list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	for (; h; h = h->next)
	{
		element_count++;
	}
	return (element_count);
}
