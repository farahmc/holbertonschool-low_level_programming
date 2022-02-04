#include <stdio.h>

/**
 *main - Defines main can only be called without any parameters
 *
 *Description: int defines num to print
 *for writes the character to stdout
 *where num starts at 0, stops at 9 and ascends by one increment
 *Return: 0 at the end of the function
 *
 */

int main(void)
{

int num;

num = '0';
while (num <= '9')
{
	putchar(num);
	if (num < '9')
	{ putchar (',');
	  putchar (' ');
	}
	num++;
}
return (0);
}
