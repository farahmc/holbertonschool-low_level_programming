#include <stdio.h>

/**
 * get_tb - find sum of diagonal elements in array from top to bottom
 * @a: the array
 * @size: the size of the array
 *
 * Description: while row is less than size
 * find the first element, then add it to the next element
 * while moving across the row and down the column
 * both locations are increasing by 1
 *
 * Return: sum of these elements
 */

int get_tb(int *a, int size)
{
	int row = 0;
	int col = 0;
	int sumrc = 0;

	while (row < size)
	{
		sumrc = sumrc + *(a + col + (row * size));
		row = row + 1;
		col = col + 1;
	}

	return (sumrc);
}

/**
 * get_bt- find sum of diagonal elements in array from bottom to top
 * @a: the array
 * @size: the size of the array
 *
 * Description: while row is more than or equal to 0
 * add the elements of the array, starting from the last row
 *
 * Return: sum of elements
 */

int get_bt(int *a, int size)
{
	int row = size - 1;
	int col = 0;
	int sumrc = 0;

	while (row >= 0)
	{
		sumrc = sumrc + *(a + col + (row * size));
		row = row - 1;
		col = col + 1;
	}
	return (sumrc);
}

/**
 * print_diagsums- print sums of diagonals of a square matrix
 * @a: the array
 * @size: the size of the array
 *
 * Description: print the sums of the diagonal elements
 *
 * Return: 0 is success
 */

void print_diagsums(int *a, int size)
{
	printf("%d, %d\n", get_tb(a, size), get_bt(a, size));
}
