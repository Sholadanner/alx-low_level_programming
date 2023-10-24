#include "lists.h"

/**
 * print_listint - funtion prints the elements in a node
 * @h: the header pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}
	return (count_node);
}
