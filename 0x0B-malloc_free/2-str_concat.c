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

/**
 * str_concat- concatenates 2 strings
 * @s1: first string
 * @s2: second string to append to first string
 *
 * Description:
 *
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	int i = 0;
	int i2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2);
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i = i + 1;
	}
	while (s2[i2] != '\0')
	{
		concat[i] = s2[i2];
		i = i + 1;
		i2 = i2 + 1;
	}
	concat[i] = '\0';

	return(concat);
}
