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
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	no = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (no);
}
