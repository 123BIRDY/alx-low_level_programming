#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: double pointer to dimension of previous task
 * @height: the height of the grid
 * Return: the value of freed grid
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
		/* Free grid row by row */
	}
	free(grid); /* Free the grid entirely */
}
