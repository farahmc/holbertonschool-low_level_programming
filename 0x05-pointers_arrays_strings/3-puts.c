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
 * _puts- displays string
 * @str: string to be displayed
 *
 * Description: loop to display each character of a string
 *
 * Return: 0 is success
 */

void _puts(char *str)
{
	int eachchar;
	int stringlength;

	stringlength = _strlen(str);

	for (eachchar = 0; eachchar < stringlength; eachchar++)
		_putchar(str[eachchar]);

	_putchar('\n');
}
