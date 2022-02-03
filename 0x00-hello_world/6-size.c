#include <stdio.h>

/**
 *main - Defines main can only be called without any parameters
 *
 *Description: printf displays the size of the variable
 *sizeof evaluates the size of a variable
 *
 *Return: 0 at the end of the function
 */

int main(void)
{

char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

/*sizeof evaluates the size of a variable */

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

return (0);

}
