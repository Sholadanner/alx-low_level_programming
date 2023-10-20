#include "lists.h"

/**
 * add_node_end - function that add end of nodes
 * @head: node head
 * @str: string that stores the nodes
 * Return: to be determined
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *top;
	unsigned int i, node_count = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		node_count++;
	node->len = node_count;
	node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (*head);
}
