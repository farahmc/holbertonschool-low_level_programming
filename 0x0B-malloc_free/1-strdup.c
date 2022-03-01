#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	if (str == NULL)
		return (NULL);

	dest = malloc(sizeof(*str) * (index + 1));

	while (str[index] != '\0')
	{
		dest[index] = str[index];
		index = index + 1;
	}
	if (dest == NULL)
		return (NULL);

	return (dest);
}
