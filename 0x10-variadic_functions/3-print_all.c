#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;

	int i;
	int index = 0;
	char c;
	char *s, *separator;
	float f;

	va_start(args, format);

	while (format[index] != '\0')
	{
		if (format[index + 1])
			separator = ", ";
		switch (format[index])
		{
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			printf("%s%s", s, separator);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d%s", i, separator);
			break;
		case 'c':
			c = (char)va_arg(args, int);
			printf("%c%s", c, separator);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f%s", f, separator);
			break;
		}
		index++;
	}
	printf("\n");
	va_end(args);
}
