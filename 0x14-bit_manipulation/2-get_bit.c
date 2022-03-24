#include <stdio.h>
#include "main.h"

/**
 * get_bit - return the value of a bit at given position
 * @n: the number
 * @index: the position of which to check the value
 *
 * Description: interate through bits by right shifting
 * if loop position is equal to index, return the value
 *
 * Return: value of the bit at the given index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 63)
		return (-1);

	while (n > 0)
	{
		if (i == index)
			return (n & 1);
		n = n >> 1;
		i++;
	}

	return (0);
}
