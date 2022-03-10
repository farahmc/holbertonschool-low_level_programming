#include "variadic_functions.h"

/**
 * print_strings- function that prints strings
 * @separator: string to print between strings
 * @n: number of strings passed to function
 *
 * Description: variadic function to print n number of strings, with
 * a separator between, ending the function with a new line
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string;

	va_start(args, n);
	while (i < n)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			printf("(nil)");

		printf("%s", string);

		if (i < (n - 1) && (separator != NULL))
			printf("%s", separator);
		i++;
	}

	printf("\n");

	va_end(args);
}
