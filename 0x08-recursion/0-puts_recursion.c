#include "main.h"

/**
 * _puts_recursion- print a string followed by a new line
 * @s: string to be printed
 *
 * Description: recursive function to print each character of a
 * string until it reaches null byte, then print a new line
 *
 * Return: 0 is success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	if (*s == '\0')
	{
		_putchar('\n');
	}
}
