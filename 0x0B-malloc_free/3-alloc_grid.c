#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - allocs grid array
* @width: The width
* @height: The height
* Return: pointer or null
*/
int **alloc_grid(int width, int height)
{
	int indexHeight, wid_index;
	int **d_dimen;

	if (width <= 0 || height <= 0)
		return (NULL);

	d_dimen = malloc(sizeof(int *) * height);


	if (d_dimen == NULL)
		return (NULL);
	for (indexHeight = 0; indexHeight < height; indexHeight++)
	{
		d_dimen[indexHeight] = malloc(sizeof(int) * width);
		if (d_dimen[indexHeight] == NULL)
		{
			for (; indexHeight >= 0; indexHeight--)
				free(d_dimen[indexHeight]);


			free(d_dimen);
			return (NULL);
		}
	}
	for (indexHeight = 0; indexHeight < height; indexHeight++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
		{
			d_dimen[indexHeight][wid_index] = 0;
		}
	}
	return (d_dimen);
}
