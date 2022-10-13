#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks malloc
 * @b: the no of bytes
 * Return: a pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
