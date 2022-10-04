#include "main.h"

#include <stdio.h>

#include <stdlib.h>

/**
* free_grid - Frees grid
* @grid: The 2-dimensional array
* @height: height bof grid
* Return: void
*/
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);


	free(grid);
}
