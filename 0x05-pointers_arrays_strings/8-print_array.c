#include "main.h"
#include <stdio.h>

/**
 * print_array- print elements of the array
 * @a: pointer to array
 * @n: number of elements to be printed
 *
 * Description: loop to print elements of the array up to n times
 * using printf, separated by comma and space
 *
 * Return: 0 is success
 */

void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);

		x++;
	}
	printf("\n");
}
