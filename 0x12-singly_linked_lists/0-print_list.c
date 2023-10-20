#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: the linked list
 * Return: the numebr of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nul)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h->next;
		node_count++;
	}
	return (node_count);
}
