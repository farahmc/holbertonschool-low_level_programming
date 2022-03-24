#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert a given int to binary
 * @n: given decimal value
 *
 * Description: convert an int to binary using bitwise operators
 *
 * Return: void return
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
