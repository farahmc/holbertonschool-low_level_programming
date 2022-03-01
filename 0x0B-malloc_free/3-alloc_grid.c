#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- return a pointer to a 2d array of integers
 * @height: row of integers
 * @width: column of integers
 *
 * Description: set memory allocation of height
 * loop to go through rows
 * set memory allocation of width
 * free space if null byte returned
 * loop to go through columns and display grid
 *
 * Return: null if width or height is 0 or negative
 * null if null byte in array
 * array if success
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int row;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	row = 0;
	while (row < height)
	{
		array[row] = malloc(sizeof(int) * width);
		if (array[row] == NULL)
		{
			row = 0;
			while (row < height)
			{
				free(array[row]);
				row = row + 1;
			}
			free(array);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			array[row][col] = 0;
			col = col + 1;
		}
		row = row + 1;
	}

	return (array);
}
