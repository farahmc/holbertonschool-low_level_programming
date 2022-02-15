#include "main.h"

/**
 * _strcpy- copies string
 * @dest: points to buffer
 * @src: points to string location
 *
 * Description: copies string pointed to by src
 * to buffer pointed to by dest inc terminating null byte
 *
 * Return: value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
