#include "main.h"
/**
 * _isdigit - checks if variable is digit between 0 and 9
 * @c: variable
 *
 * Description: for loops checks if variable is digit 0-9
 *
 * Return: 1 if c is number between 0-9, otherwise return 0
 */
int _isdigit(int c)
{
	int n;

		if (c >= '0' && c <= '9')
		{
			n = 1;
		}
		else
		{
			n = 0;
		}
	return (n);
}
