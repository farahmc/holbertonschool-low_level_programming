#include "main.h"

/**
 * match- first matched character of haystack with needle
 * @firstmatch: first matched char
 * @needle: chars of needle
 *
 * Description: loop to return 0 if no match
 *
 * Return: 1 if string matches
 */

int match(char *firstmatch, char *needle)
{
	while (*needle != '\0')
	{
		if (*firstmatch != *needle)
		{
			return (0);
		}
		needle = needle + 1;
		firstmatch = firstmatch + 1;
	}
	return (1);
}

/**
* _strstr- locate a substring
* @haystack: string to search
* @needle: string to match
*
* Description: loop to go through chars in haystack
* if char matches first char in needle
* run match function and return value of haystack at that point
*
* Return: haystack at point of match or null otherswise
*/

char *_strstr(char *haystack, char *needle)
{
	int hcount;

	hcount = 0;
	while (haystack[hcount] != '\0')
	{
		if (haystack[hcount] == needle[0])
		{
			if (match(&haystack[hcount], needle) == 1)
			{
				return (&haystack[hcount]);
			}
		}
		hcount = hcount + 1;
	}
	if (*needle == '\0')
		return (haystack);

	return (0);
}
