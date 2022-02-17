#include "main.h"

/**
 * _strcat- concatenate 2 stings
 * @dest: first string
 * @src: second string to append to dest
 *
 * Description: first while loop to store length of dest
 * a is \0 at the end of this loop
 * second while loop to concatenate src to end of dest
 * end with a null value at end of string
 *
 *
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b = 0;

	a = 0;
	while (dest[a] != '\0')
		a = a + 1;

	while (src[b] != '\0')
	{

		/**
		 * so when you say dest[a] = it's at the \0  of
		 * dest that you are adding the src bc of the previous loop
		 * src is on the other side of the = bc you are
		 * adding src to dest
		 */

		dest[a] = src[b];
		b = b + 1;
		a = a + 1;
	}

	dest[a] = '\0';

	return (dest);
}
