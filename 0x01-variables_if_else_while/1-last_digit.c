#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Defines main can only be called without any parameters
*
*Description: int n defines n as random variable
*lastn defines the last digit of the random variable
*if function to print the last digit of random variable and define if it is
*larger than 5, zero or less than 6 and not 0
*where ch starts at a, stops at z and ascends by one increment
*
*Return: 0 at the end of the function
*/

int main(void)
{
int n;
int lastn;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;

if (lastn > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
