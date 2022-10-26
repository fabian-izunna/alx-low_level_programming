#include "lists.h"

/**
 * sum_listint - sums of all the data of a linked list.
 * @head: ptr to the head of a list.
 * Return: sum of all te data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
