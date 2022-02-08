#include "main.h"
/**
 *_abs - calculates absolute number of a given integer
 *@n: integer
 *
 *Description: if integer is less than 0
 *perform calculation to show absolute number
 *
 *Return: absolute integer of n
 *
 */
int _abs(int n)
{

	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
