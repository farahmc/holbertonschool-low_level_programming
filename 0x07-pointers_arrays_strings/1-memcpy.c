#include "main.h"

/**
 * _memcpy- copy memory area
 * @n: copy this number of bytes
 * @src: from this memory area
 * @dest: to this memory area
 *
 * Description: loop to copy n bytes from src
 * to dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count <= n)
	{
		dest[count] = src[count];
		count = count + 1;
	}

	return (dest);
}
