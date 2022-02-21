#include "main.h"

/**
 * _memset- fills memory with a constant byte
 * @s: pointer of memory area
 * @b: constant byte
 * @n: first n bytes of memory area filled by b
 *
 * Description: while loop to go through memory pointed to by s
 * while the count is less than n
 * fill memory area with b
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		s[count] = b;
		count = count + 1;
	}
	return (s);
}
