#include "lists.h"
/**
 * listint_len - lists len of elements in linked list
 * @h: pointer to the linked list
 * Return: no of elements in the list<F11>
**/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
