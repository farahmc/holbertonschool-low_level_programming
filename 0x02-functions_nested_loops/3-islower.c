#include "main.h"
/**
 *_islower- checks for lowercase letter
 *
 *Description: if c is a lowercase letter print 1
 *
 *Return: 0 if c is not a lowercase, print 0
 *
 */
int _islower(int c)
{
	int n;

	if(c >= 'a' && c <= 'z')
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
