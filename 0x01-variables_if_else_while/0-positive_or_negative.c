#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Defines main can only be called without any parameters
 *
 *Description: if variable is larger than 0, print variable is
 *postitive
 *else will print variable is 0 if variable is 0
 *else will print variable is negative if variable is less than 0
 *
 *Return: 0 at the end of the function  goes there
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}
