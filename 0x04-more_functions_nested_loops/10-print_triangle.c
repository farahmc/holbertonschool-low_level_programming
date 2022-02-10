#include "main.h"

void print_triangle(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(row = 1; row <= size; row++)
		{
			for(col = row; col < size; col++)
			{
				_putchar(' ');
			}
			for(col = 1; col <= row; col++)
				{
					_putchar('#');
				}
			_putchar('\n');
		}
	}
}
