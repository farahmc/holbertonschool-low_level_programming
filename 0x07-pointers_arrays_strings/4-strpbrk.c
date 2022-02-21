#include "main.h"

/**
 * _strpbrk- search a string for any of a set of bytes
 * @s: string to be searched
 * @accept: chars to match in string
 *
 * Description: loop through string, if it matches
 * chars in accept, return the string
 *
 * Return: 0 if no matches
 */

char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s != '\0')
	{
		count = 0;
		while (accept[count])
		{
			if (*s == accept[count])
				return (s);
			count = count + 1;
		}
		s = s + 1;
	}
	return (0);
}
