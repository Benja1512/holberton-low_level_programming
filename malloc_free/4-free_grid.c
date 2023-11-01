#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees two dimensional grid 
 * @grid: two dimensional grid
 * @height: height of two dimensional
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
