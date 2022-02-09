#include "main.h"

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
				_putchar(',');
			}
			else if (result > 9)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
			}
			else if (result <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
