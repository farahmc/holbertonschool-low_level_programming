#include <stdio.h>

/**
 * main - print first 50 fibonacci sequence
 *
 * Description: print first 50 fibonacci sequence
 * starting from 1 and 2
 *
 * Return: void return
 */

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, next = n1 + n2;
	int i = 3;

	printf("%lu, %lu", n1, n2);
	while (i < 50)
	{
		printf(", %lu", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		i++;
	}
	printf("\n");

	return (0);
}
