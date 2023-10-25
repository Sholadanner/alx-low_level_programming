#include "lists.h"

/**
 * sum_listint - reurns sum of all the data
 * @head: head pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listin_t *comp = *head;

	while (head != NULL)
	{
		sum += comp->n;
		comp = comp->next;
	}
	return (sum);
}
