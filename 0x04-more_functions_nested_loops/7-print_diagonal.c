#include "main.h"

void print_diagonal(int n)
{
	int row;
	int col;

	if(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(row = 0; row < n; row++)
		{
			for(col = 0; col < n; col++)
			{
				if(col == row)
				{
					_putchar(92);
					_putchar('\n');
				}
				else if(col < row)
				{
					_putchar(' ');
				}
			}
		}
	}
}
