#include "main.h"

/**
 * print_diagonal- print a diagonal shape
 * @n: random variable
 *
 * Description: nested loops to print a diagonal image
 * using only putchar
 *
 * Return: 0 is success
 */

void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < n; col++)
			{
				if (col == row)
				{
					_putchar(92);
					_putchar('\n');
				}
				else if (col < row)
				{
					_putchar(' ');
				}
			}
		}
	}
}
