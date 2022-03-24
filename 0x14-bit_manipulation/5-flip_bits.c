#include <stdio.h>
#include "main.h"

/**
 * flip_bits - count number of bits to flip to change given int to
 * another
 * @n: first number
 * @m: second number
 *
 * Description: count number of bits to flip
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_nm, count = 0;

	XOR_nm = n ^ m;
	while (XOR_nm != 0)
	{
		count = count + (XOR_nm & 1);
		XOR_nm = XOR_nm >> 1;
	}

	return (count);
}
