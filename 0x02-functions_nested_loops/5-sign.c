#include "main.h"
/**
 *print_sign- prints the sign of a number
 *@n: is a number
 *Description: if n is 0, print 0
 *if n is larger than 0, print +
 *if n is less than 0, print -
 *
 *Return: 1 if larger or less than 0, otherwise 0
 *
 */
int print_sign(int n)
{
	int a;

	if (n = '0')
	{
		a = 0;
		_putchar('0');
	}
	else if (n > '0')
	{
		a = 1;
		_putchar('+');
	}
	else
	{
		a = -1;
		_putchar('-');
	}
	return (a);
}
