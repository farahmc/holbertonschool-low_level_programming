#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiply 2 numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: multiply 2 numbers given on command line and print result
 * if no arguments received, print error
 *
 * Return: 0 is success, if no arguments received, return 1
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		while (i < argc)
		{
			mul = mul * atoi(argv[i]);
			i = i + 1;
		}
		printf("%d\n", mul);
	}
	return (0);
}
