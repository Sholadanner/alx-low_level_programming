#include "lists.h"

/**
 * add_nodeint - function that adds new node to the start
 *
 * @head: pointer to a pointer of the head link
 *
 * @n: value of th the new node
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
