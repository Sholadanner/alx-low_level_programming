#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node to list
 * @head: pointer to a pointer to a header
 * @idx: index where new node is added
 * @n: data inside new node
 * Return: to be determined
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *comp = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL || head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; comp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = comp->next;
			comp->next = newnode;
			return (newnode);
		}
		else
			comp = comp->next;
	}
	return (NULL);
}
