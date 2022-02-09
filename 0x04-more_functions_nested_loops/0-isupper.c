#include "main.h"
/**
 * _isupper- checks for uppercase letter
 * @c: variable
 *
 * Description: for loop to check if variable is uppercase
 *
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	int n;

	if (c >= 'A' && c <= 'Z')
	{
		n = 1;
	}
	else
	{
		n = 0;
	}

	return (n);
}
