#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array if int
 * @min: min value
 * @max: max value
 * Return: ponter to wrray
 */
int *array_range(int min, int max)
{
	int *ptr;
	int index;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		ptr[index] = min++;
	return (ptr);
}
