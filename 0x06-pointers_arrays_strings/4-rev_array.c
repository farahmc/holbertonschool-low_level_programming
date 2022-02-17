#include "main.h"

/**
 * swap_int- swap integers
 * @a: first integers
 * @b: second integer
 *
 * Description: temp to hold *a so *b can call it prior to change
 *
 * Return: 0 for success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array- reverse a given array
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Description: beg is pointer to start of array
 * end is pointer to end of array
 * while beg is less than end, swap each element incrementing by 1
 * from beginning and decrementing by 1 from end
 *
 * Return: 0 is success
 */

void reverse_array(int *a, int n)
{
	int *beg;
	int *end;

	beg = &a[0];
	end = &a[n - 1];

	while (beg < end)
	{
		swap_int(beg, end);
		beg = beg + 1;
		end = end - 1;
	}
}
