#include <stdio.h>

/**
 *main - Defines main can only be called without any parameters
 *
 *Description: char defines ch to print
 *for writes the character to stdout
 *where ch starts at z, stops at a and descends by one increment
 *
 *Return: 0 at the end of the function
 *
 */

int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar ('\n');
return (0);
}
