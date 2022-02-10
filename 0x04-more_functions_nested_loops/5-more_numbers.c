#include "main.h"

/**
 * more_numbers- print 10 rows of numbers 0-14
 *
 * Description: print 10 rows of numbers 0-14 using only putchar
 *
 * Return: 0 for success
 */

void more_numbers(void)
{
	int n;
	int lines;

	for (lines = 0; lines < 10; lines++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}

		_putchar('\n');
	}
}
