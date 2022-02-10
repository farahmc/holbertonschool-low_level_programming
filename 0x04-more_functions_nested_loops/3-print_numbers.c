#include "main.h"

/**
 * print_numbers- print numbers 0 to 9
 *
 * Description: simple for loop to display numbers 0 to 9
 * followed by a new line
 *
 * Return: 0 is success
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);

	_putchar('\n');
}
