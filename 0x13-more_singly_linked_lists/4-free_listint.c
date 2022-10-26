#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: ptr to the list
 * Return: void
 **/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
