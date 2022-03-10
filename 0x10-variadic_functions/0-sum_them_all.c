#include "variadic_functions.h"

/**
 * sum_them_all- function that returns the sum of its integers
 * @n: required argument
 *
 * Description: variadic function to return sum of its integers
 *
 * Return: sum if success
 * 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list args;

	if (n == 0)
		return (0);


	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, unsigned int);
		i++;
	}

	va_end(args);

	return (sum);
}
