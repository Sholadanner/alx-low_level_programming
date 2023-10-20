#include "list.h"
#include <stdio.h>
#include <stdstr.h>
#include <stdlib.h>

/**
 * add_node - add nodes
 * @head: head of nodes
 * @str: string to store nodes
 * Return: to be determined
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int i, node_count = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (i = 0, str[i] != '\0'; i++)
		node_count++;
	node->len = node_count;
	node->next = *head;
	*head = node;

	return (*head);
}
