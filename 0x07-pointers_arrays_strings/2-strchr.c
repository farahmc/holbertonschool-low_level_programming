#include "main.h"

/**
 * _strchr- locates a character in a string
 * @s: string to search
 * @c: character to find in string
 *
 * Description: loop to go through characters in s
 * if the character doesn't match c, keep going
 * else, return from the location in string
 * if no characters match, return 0
 *
 * Return: s if character located, 0 if not located
 */

char *_strchr(char *s, char c)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] != c)
			s = s + 1;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (0);
}
