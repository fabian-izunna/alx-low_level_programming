#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - del the haed node
 * @head: ptr to the head node
 * Return: head nodes data
 **/
int pop_listint(listint_t **head)
{
	int no;

	if (*head == NULL)
		return (0);

	no = (*head)->n;
	*head = (*head)->next;

	return (no);
}
