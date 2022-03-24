#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check network byte order
 *
 * Description: check network byte order and host byte order
 *
 * Return: 1 if little endian, 0 is big endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c != '\0')
		return (1);
	else
		return (0);
}
