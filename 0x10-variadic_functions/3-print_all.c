#include "variadic_functions.h"

/**
 * print_all- function that prints anything
 * @format: list of types or arguments passed to function
 *
 * Description: print anything
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int index = 0;
	char c;
	char *s;
	char *separator = "";
	float f;

	va_start(args, format);
	while (format[index] != '\0' && *format != '\0')
	{
		if (format[index] != format[0])
			separator = ", ";

		switch (format[index])
		{
		case 's':
			s = va_arg(args, char *);
			if (s == NULL || *s == '\0')
				s = "(nil)";

			printf("%s%s", separator, s);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%s%d", separator, i);
			break;
		case 'c':
			c = (char)va_arg(args, int);
			printf("%s%c", separator, c);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%s%f", separator, f);
			break;
		}
		index++;
	}
	printf("\n");
	va_end(args);
}
