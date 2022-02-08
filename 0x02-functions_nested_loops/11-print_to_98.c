#include "main.h"
#include <stdio.h>
/**
 *print_to_98- print all natural numbers to 98
 *@n: integer
 *
 *Description: if n is less than 98, print in ascending order
 *else if n is more than 98, print in descending order
 *else print 98
 *
 *Return: 0 for success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
