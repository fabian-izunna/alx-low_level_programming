#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node to linked list
 * @head: a ptr to the head
 * @n: the new int
 * Return: ptr to new head
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
