#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear a bit at a given index
 * @n: the given number
 * @index: the position to clear the bit
 *
 * Description: shift bits left index number of times
 * then clear bit
 *
 * Return: 1 if bit is changed, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
