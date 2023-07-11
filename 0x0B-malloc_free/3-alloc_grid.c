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

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			while (--a >= 0)
				free(grid[a]);
		}
		free(grid);
		return (NULL);

		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
