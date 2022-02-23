#include "main.h"

/**
 * _print_rev_recursion- reverse a string
 * @s: string to be reversed
 *
 * Description: recursive function to print a string in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
