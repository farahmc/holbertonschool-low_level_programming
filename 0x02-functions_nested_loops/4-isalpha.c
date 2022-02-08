#include "main.h"
/**
 *_isalpha- checks for letter
 *@c: is a character
 *Description: if c is a letter print 1
 *
 *Return: 0 if c is not a letter, print 0
 *
 */
int _isalpha(int c)
{
	int n;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
