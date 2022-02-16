#include "main.h"

/**
 * _strcat- concatenate 2 stings
 * @dest: first string
 * @src: second string to append to dest
 *
 * Description: first for loop to store length of dest
 * second for loop to concatenate src to end of dest
 * end with a null value at end of string
 *
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int concat;

	for (a = 0; dest[a] != '\0'; ++a)
		;

	for (concat = 0; src[concat] != '\0'; ++concat, ++a)
	{
		dest[a] = src[concat];
	}
	dest[a] = '\0';

	return (dest);
}
