#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2D array/grid
 * @grid: first parameter
 * @height: second parameter
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
