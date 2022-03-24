#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a string of binary to unsigned int
 * @b: the string to convert
 *
 * Description: convert a string of binary numbers to decimal
 * using bitwise operators
 *
 * Return: Null if string is null or contains anything other than
 * 0 or 1, else return the decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);

		value = value << 1;
		value = (value + b[i]) - '0';
		i++;
	}
	return (value);
}
