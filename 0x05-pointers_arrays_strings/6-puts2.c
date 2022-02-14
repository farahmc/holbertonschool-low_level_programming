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
 * puts2- displays every other char in string
 * @str: string to be displayed
 *
 * Description: loop to display every other character of a string
 *
 * Return: 0 is success
 */

void puts2(char *str)
{
	int letters;
	int a;

	letters = _strlen(str);
	a = 0;

	while (a < letters)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
