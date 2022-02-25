#include <stdio.h>
#include <stdlib.h>

/**
 * main- add positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: add positive numbers entered into cli and print
 *
 * Return: if positive int, print number
 * if no numbers entered, print 0
 * if char entered, print error
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			sum = sum + atoi(argv[i]);
			i = i + 1;
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
