#include <stdio.h>

/**
 *main - Defines main can only be called without any parameters
 *
 *Description: int defines num to print
 *while num is less than 9, print
 *if num less than 9, add comma and space
 *
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
putchar ('\n');
return (0);
}
