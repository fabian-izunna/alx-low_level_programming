#include "main.h"
#include <stdlib.h>  
#include <stdio.h>

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
