#include "lists.h"

/**
 * list_len - counts the number of nodes
 * @h: the linked list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
