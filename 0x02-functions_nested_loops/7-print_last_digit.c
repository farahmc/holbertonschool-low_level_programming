#include "main.h"
/**
 *print_last_digit - finds last digit
 *@r: integer
 *
 *Description: if integer is less than 0
 *perform calculation to show absolute number
 *
 *Return: last digit of n
 *
 */
int print_last_digit(int r)
{
	int n;

	n = (r % 10);

	if (r < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');

	return (n);
}
