#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
				row ++;
			}
			free(array);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			array[row][col] = 0;
			col++;
		}
		row++;
	}

	return (array);
}
