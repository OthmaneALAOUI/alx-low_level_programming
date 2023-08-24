#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *t = *head;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (t->next)
		t = t->next;
	t->next = new_node;

	return (new_node);
}
