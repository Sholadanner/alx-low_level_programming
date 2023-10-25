#include "lists.h"

/**
 * pop_listint - deletes head of a node
 * @head: a pointe to a pointer of the head link
 * Return: void
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *o_node;

	if (*head == NULL)
		return (0);
	o_node = *head;
	i = o_node->n;
	*head = o_node->next;
	free(o_node);
	return (i);
}
