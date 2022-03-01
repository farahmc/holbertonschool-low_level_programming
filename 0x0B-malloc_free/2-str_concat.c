#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen- counts number of characters in string
 * @s: string to be counted
 *
 * Description: loop to count number of characters in string
 * that is located by a pointer
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

char *str_concat(char *s1, char *s2)
{
	int len;
	int i = 0;
	char *concat;
	char *beg;

	if (s1 == NULL || s2 == NULL)
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
	*concat = '\0';

	return(beg);
}
