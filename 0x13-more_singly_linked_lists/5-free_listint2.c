#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to pointer of head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(current);
		*head = current;
	}
	*head = NULL;
}
