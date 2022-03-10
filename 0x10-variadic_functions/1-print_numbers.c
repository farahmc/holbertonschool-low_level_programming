#include "variadic_functions.h"

/**
 * print_numbers- function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Description: variadic function to print given numbers up to n
 * followed by a new line
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, unsigned int));

		if (i < (n - 1) && (separator != NULL))
			printf("%s", separator);

		i++;
	}
	printf("\n");

	va_end(args);
}
