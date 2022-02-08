#include "main.h"
/**
 *print_alphabet- use _putchar to display alphabet string
 *
 *Description: called functions in main.h
 *_putchar to print alphabet a to z
 *
 *Return: 0 at the end of the function
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
}
