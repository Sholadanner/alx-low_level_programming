#include "lists.h"

/**
 * free_list - function to frees a list
 * @head: pointer to the heado of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
