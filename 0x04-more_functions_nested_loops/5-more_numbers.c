#include "main.h"

void more_numbers(void)
{
	int n;
	int lines;

	for (lines = 0; lines <= 10; lines++)
	{
		for (n = 0; n <= 14; n++)
		{
			if(n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}

		_putchar('\n');
	}
}
