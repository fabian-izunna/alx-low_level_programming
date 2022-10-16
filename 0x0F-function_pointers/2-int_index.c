#include "function_pointers.h"

/**
 * int_index - searvhes for an int in a function
 * @array: the array of int
 * @size: thr size of array
 * @cmp: the function
 * Return: -1 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
