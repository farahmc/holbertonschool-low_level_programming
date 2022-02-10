#include "main.h"

/**
 * print_square- print a square
 * @size: size of square
 *
 * Description- print a square on the terminal with a value given by size
 *
 * Return: 0 for success
 */

void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
