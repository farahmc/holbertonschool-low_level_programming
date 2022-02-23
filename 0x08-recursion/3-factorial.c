#include "main.h"

/**
 * factorial- function to return factorial of a given number
 * @n: given int
 *
 * Description: recursive function to return factorial
 *
 * Return: if less than 0, return -1
 * if 0 or 1, return 1
 * otherwise return the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
