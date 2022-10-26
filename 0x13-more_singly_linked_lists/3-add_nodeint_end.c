#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new_node nide at the ebd  if a linked list
 * @head: ptr to the linked list
 * @n: the new_node node to be added
 * Return: ptr to the new_node list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}
