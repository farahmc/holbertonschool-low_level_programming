#include "main.h"

/**
 *print_alphabet_x10- print alphabet 10 times
 *
 *Description: a for loop printing alphabet a to z
 *within a while loop repeating 10 times
 *
 *Return: 0 at the end of the function
 */

void print_alphabet_x10(void)
{
	int alphabet, lines;

	lines = 0;

	while (lines < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		lines++;
		_putchar('\n');
	}
}
