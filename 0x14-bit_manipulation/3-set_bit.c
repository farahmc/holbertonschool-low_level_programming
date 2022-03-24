#include <stdio.h>
#include "main.h"

/**
 * set_bit - set a bit to 1 at a given index
 * @n: the given number
 * @index: the position to set a bit to 1
 *
 * Description: shift bits left index number of times
 * then set bit to 1
 *
 * Return: 1 if bit is changed, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
