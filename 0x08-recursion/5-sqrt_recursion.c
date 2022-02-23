#include "main.h"

/**
 * is_sqrt- find out if given integer has a square root
 * @n: integer to find square root
 * @sqrt: the square root of n
 *
 * Description: find square root
 *
 * Return: if there is no square root, return 1
 * if there is a square root, return it
 **/

int is_sqrt(unsigned int n, int sqrt)
{
	unsigned int i = sqrt * sqrt;

	if (n < i)
		return (-1);
	if (n == i)
		return (sqrt);
	else
		return (is_sqrt(n, 1 + sqrt));
}

/**
 * _sqrt_recursion- return the natural square root
 * @n: given integer to find if there is a square root
 *
 * Description: use the is_sqrt function to find square root
 * of integer by brute force (going through every int from 2)
 *
 * Return: if n is 1, return 1
 * if n is less than 0, return 1
 * if n is a square root, return it
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n <= 0)
		return (-1);
	return (is_sqrt(n, 2));
}
