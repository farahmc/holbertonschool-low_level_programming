#include <stdio.h>

/**
 * main - print the number of arguments passed into program
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Description: print the number of arguments passed into program
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
