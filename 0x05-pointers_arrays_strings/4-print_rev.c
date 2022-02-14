#include "main.h"

/**
 * _strlen- counts number of characters in string
 * @s: string to be counted
 *
 * Description: loop to count number of characters in string
 * that is lcated by a pointer
 *
 * Return: number of characters in string
 */

int _strlen(char *s)
{
	int numofchar;

	for (numofchar = 0; *s != '\0'; s++)
		numofchar++;

	return (numofchar);
}

/**
 * print_rev- displays string
 * @s: string to be displayed
 *
 * Description: trying a while loop
 * to display each character of a string backwards
 *
 * Return: 0 is success
 */

void print_rev(char *s)
{
	int a;
	int b;

	b = _strlen(s) - 1;

	while (s[b] != '\0')
	{
		a = s[b];
		b--;
		_putchar(a);
	}
	_putchar('\n');
}
