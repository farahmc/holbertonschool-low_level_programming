#include "main.h"
/**
 * print_most_numbers- print numbers 0-9 except 2 and 4
 *
 * Description: simple for loop to print numbers 0-9
 * except 2 and 4, followed by new line
 *
 * Return: 0 is success
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}
