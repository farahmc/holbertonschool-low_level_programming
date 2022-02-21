#include "main.h"

/**
 * print_chessboard- print the chessboard
 * @a: array to print
 *
 * Description: loops to display arrays in rows and cols
 *
 * Return: 0 is success
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	row = 0;
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			if (col == 7)
			{
				_putchar(a[row][col]);
				_putchar('\n');
			}
			else
				_putchar(a[row][col]);
			col = col + 1;
		}
		row = row + 1;
	}
}
