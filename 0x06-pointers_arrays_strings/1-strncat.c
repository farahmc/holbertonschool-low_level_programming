#include "main.h"

/**
 * _strncat- concatenate 2 strings
 * @dest: first string
 * @src: second string to append to dest
 * @n: use at most n bytes from dest
 *
 * Description: first while loop to store length of dest
 * a is \0 at the end of this loop
 * second while loop to concatenate src to end of dest
 * only while count is less than value of n
 * end with a null value at end of string
 *
 *
 * Return: value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int count = 0;

	a = 0;
	while (dest[a] != '\0')
		a = a + 1;

	while (src[count] != '\0' && count < n)
	{
		dest[a] = src[count];
		count = count + 1;
		a = a + 1;
	}

	dest[a] = '\0';

	return (dest);
}
