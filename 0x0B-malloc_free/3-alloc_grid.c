#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - functions that returns pointer to 2 dimensional
 * array of strings
 * @width: number of columns
 * @height: number of rows
 * Return: return pointer to grid or NULL
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; a++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
