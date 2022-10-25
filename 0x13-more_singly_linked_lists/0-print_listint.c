#include "lists.h"

/**
 * print_listint - prints int elements
 * @h: pointer to the list
 * Return: the number of nodes
**/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
