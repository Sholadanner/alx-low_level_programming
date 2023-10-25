#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the head pointer
 * @index: the index of the new node to be retrived
 * Return: to be determined
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int data = 0;
	listint_t *old_head = head;

	while (old_head && data < index)
	{
		old_head = old_head->next;
		data++;
	}
	return (old_head ? old_head : NULL);
}
