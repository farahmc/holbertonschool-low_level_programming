#include <stdio.h>

/**
 *main - Defines main can only be called without any parameters
 *
 *Description: char defines num to print
 *for writes the character to stdout
 *where num starts at 0, stops at 9 and ascends by one increment
 *Return: 0 at the end of the function
 *
 */

int main(void)
{
char num;

for (num = '0'; num <= '9'; num++)
putchar(num);
putchar ('\n');
return (0);
}
