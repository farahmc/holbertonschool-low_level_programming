#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main- perform a calculation
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Description: perform a calculation on the command line
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*calc)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if (calc == NULL || strlen(argv[2] != 1))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", calc(num1, num2));

	return (0);
}
