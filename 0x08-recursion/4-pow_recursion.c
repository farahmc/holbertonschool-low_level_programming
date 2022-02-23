#include "main.h"

/**
 * _pow_recursion- returns value of x^y
 * @x: base int
 * @y: exponent
 *
 * Description: recursive func to calculate x^y
 *
 * Return: if y is 0, return 1
 * if y is less than 0, return -1
 * else return value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
