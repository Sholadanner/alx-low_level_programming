#include "lists.h"

/**
 * sum_listint - reurns sum of all the data
 * @head: head pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *comp = head;

	while (comp)
	{
		sum += comp->n;
		comp = comp->next;
	}
	return (sum);
}
