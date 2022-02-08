#include "main.h"
/**
 *jack_bauer- print every hour and minute of a 24hr day
 *
 *Description: for loop a to print hours
 *for loop b to print minutes
 *the / 10 rotates a and b
 *
 *Return: end of 24hr clock
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
