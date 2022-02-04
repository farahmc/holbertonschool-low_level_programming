#include <stdio.h>

/**
 *main - Defines main can only be called without any parameters
 *
 *Description: int defines num to print
 *n sets variable
 *while num is less than 9, print
 *increasing by 1 increment
 *n sets variable
 *while character is less than f, print
 *increasing by 1 increment
 *Return: 0 at the end of the function
 *
 */

int main(void)
{
int n;
n = '0';

while (n <= '9')
{
putchar(n);
n = n + 1;
}
n = 'a';
while (n <= 'f')
{
putchar(n);
n = n + 1;
}
putchar ('\n');
return (0);
}
