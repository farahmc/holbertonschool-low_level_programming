#include "main.h"

/**
 * _strncpy- copy a string
 * @src: string to be copied
 * @dest: location of the copied string
 * @n: using at most n bytes from src
 *
 * Description: copy a string
 * while src count is less than n, copy string
 * if there is more than n, place a null byte to end
 *
 * Return: resulting string in dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count = count + 1;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count = count + 1;
	}

	return  (dest);
}
