#include "main.h"
/**
 * times_table- print out times table up to 9
 *
 * Description: for loop to print count up to 9
 * for loop to print count up to 9
 * if else if to display result in a table
 *
 * Return: 0 for success
 */

void times_table(void)
{
	int a;
	int b;
	int result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = (a * b);
			if (b == 0)
			{
				_putchar(result + '0');
			}
			else if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
