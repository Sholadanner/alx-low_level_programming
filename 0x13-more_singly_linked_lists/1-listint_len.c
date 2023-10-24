#include "lists.h"

/**
 * listint_len - this function counts the number of nodes
 * @h: the header pointer
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
