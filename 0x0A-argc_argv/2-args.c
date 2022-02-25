#include <stdio.h>

/**
 * main- print all given arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Description: print all given arguments, each on a new line
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
