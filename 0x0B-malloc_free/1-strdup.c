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
 * _strdup- copy a given string to a newly allocated space in memory
 * @str: string to be copied
 *
 * Description: malloc to allocate memory for length of string
 * loop to go through string and copy str to dest
 *
 * Return: Null if value of string is null
 * Null if insufficient memory available
 * a pointer to the duplicated string if success
 */

char *_strdup(char *str)
{
	int index = 0;
	char *dest;
	int len = _strlen(str);

	if (str == NULL)
		return (NULL);

	dest = malloc(sizeof(str) * (len + 1));

	if (dest == NULL)
		return (NULL);

	while (index <= len)
	{
		dest[index] = str[index];
		index = index + 1;
	}
	return (dest);
}
