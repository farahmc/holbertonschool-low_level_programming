#include "main.h"

/**
 * _strcmp- compare 2 strings
 * @s1: first string
 * @s2: second string to compare
 *
 * Description: compare each value between 2 strings
 * if the value is the same, return a 0
 * if the value is larger, return a positive number
 * if the value is smaller, return a negative number
 *
 * Return: the difference in value
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
		index = index + 1;

	return (s1[index] - s2[index]);
}
