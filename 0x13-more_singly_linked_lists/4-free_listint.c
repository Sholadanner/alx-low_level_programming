#include "lists.h"

/**
 * free_listint - frees elements in a node
 * @head: the pointer that contains the link head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
