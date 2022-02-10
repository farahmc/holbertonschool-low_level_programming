#include "main.h"
/**
 * print_line- print a _ n amount of times
 * @n: variable
 *
 * Description: for loop to print a character n amount of times
 *
 * Return: 0 is success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
