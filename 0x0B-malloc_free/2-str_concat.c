#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	return (len);
}

/**
 * str_concat- concatenates 2 strings
 * @s1: first string
 * @s2: string to append to s1
 *
 * Description: find length of s1 + s2
 * allocate memory to length of s1 + s2 + 1 to accomodate null byte
 * loop through s1 and s2, assigning to concat as a temp hold
 *
 * Return: Null if null bytes in s1 or s2
 * Null if concat is null
 * concatenated string from beginning if chars present
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	int i = 0;
	char *concat;
	char *beg;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	len = _strlen(s1) + _strlen(s2);
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	beg = concat;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		concat = concat + 1;
		i = i + 1;
	}
	while (s2[i] != '\0')
	{
		concat[i] = s2[i];
		concat = concat + 1;
		i = i + 1;
	}
	concat[i] = '\0';

	return (beg);
}
