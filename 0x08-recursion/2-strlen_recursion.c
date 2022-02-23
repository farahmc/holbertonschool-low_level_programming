#include "main.h"

/**
 * _strlen_recursion- return the length of a string
 * @s: string to count
 *
 * Description: recursively count and return the length of a string
 *
 * Return: 0 if null byte reached
 * else return length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
