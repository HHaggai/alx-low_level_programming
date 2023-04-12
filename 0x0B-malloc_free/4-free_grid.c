#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this frees the 2d array
 * @grid: 2d grid ref line 5 above
 * @height: height of the grid
 * Description: this frees memory of the grid
 * Return: nothing
 *
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

