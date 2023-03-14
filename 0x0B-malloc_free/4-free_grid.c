#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid previously created
 * @grid: parameter variable
 * @height: parameter variable
 * Return: int
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		/* free each row of the grid */
	}
	free(grid);
	/* free the entire grid */
}
