#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid- free the 2d grid created by alloc_grid function
 * @height: row of integers
 * @grid: column of integers
 *
 * Description: loop to go through rows
 * free memory allocation of grid
 *
 * Return: none as void function
 */

void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row = row + 1;
	}
	free(grid);
}
