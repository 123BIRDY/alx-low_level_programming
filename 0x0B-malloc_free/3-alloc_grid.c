#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: parameter variable
 * @height: parameter variable
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));
	/* Allocates memory for grid */
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/*Frees previously allocated memory, returns NULL if failed */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* Initialize each element of the grid to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
