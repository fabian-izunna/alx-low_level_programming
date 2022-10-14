#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for a no of bytes
 * @nmemb: no of elenents
 * @size: size of elements
 * Return: pointer to mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);
	for (n = 0; n < (size * nmemb); n++)
		ptr[n] = 0;
	return (ptr);
}
