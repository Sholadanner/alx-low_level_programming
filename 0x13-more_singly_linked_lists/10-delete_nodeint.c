#include "lists.h"

/**
 * delete_nodeint_at_index - function thats delete node
 * @head: a pointer to the head pointer
 * index: index of the node to be deleted
 * Return: to be determined
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL, *temp;
	unsigned int count = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (-1);
	}

	while (count < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		count++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
