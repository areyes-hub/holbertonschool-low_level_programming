#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocates memory for and creates 2D array
 * @width: Number of columns
 * @height: Number of rows
 * Return: On success, a pointer to a 2D array, else NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, count = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid = malloc(width * sizeof(int));
		if (grid == NULL)
		{
			while (i >= 0)
			{
				free(grid[i--]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = count++;
		}
	}
	free(grid);
	return (grid);
}
