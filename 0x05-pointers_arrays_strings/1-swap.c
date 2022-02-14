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
