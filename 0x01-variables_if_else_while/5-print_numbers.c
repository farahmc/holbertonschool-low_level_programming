#include <stdio.h>

/**
 *main - Defines main can only be called without any parameters
 *
 *Description: int defines the integer to print
 *for states to print
 *where a starts at 0, stops at 10 and ascends by one increment
 *printf calls the integer stated at int
 *printf prints  new line
 *
 *Return: 0 at the end of the function
 *
 */

int main(void)
{
int a;

for (a = 0; a <= 9; a++)
printf("%d", a);

printf("\n");

return (0);
}
