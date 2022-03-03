#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen- counts number of characters in string
 * @s: string to be counted
 *
 * Description: loop to count number of characters in string
 * that is lcated by a pointer
 *
 * Return: number of characters in string
 */

int _strlen(char *s)
{
	int numofchar;

	for (numofchar = 0; *s != '\0'; s++)
		numofchar++;

	return (numofchar);
}

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
		dest[a] = src[b];
		b = b + 1;
		a = a + 1;
	}

	dest[a] = '\0';

	return (dest);
}

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

/**
 * string_nconcat- concatenate 2 strings
 * @s1: first string
 * @s2: second string to append to s1
 * @n: this number of bytes of s2 to append
 *
 * Description: concatenate 2 strings, which contains s1, followed by the first
 * n bytes of s2, and null terminated
 *
 * Return: Null if function fails
 * if n >= s2, use entire string
 * if null passed, treat as empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len_s1, len_s2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concat == NULL)
		return (NULL);

	_strcat(concat, s1);
	_strncat(concat, s2, n);

	return (concat);

}
