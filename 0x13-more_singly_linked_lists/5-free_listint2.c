#include "lists.h"

 /**
  * free_listint2 - frees a list link
  * @head: pointer to a pointer of the head link
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
