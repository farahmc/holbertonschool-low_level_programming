#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- executes a function given as a parameter on each element
 * of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to the function we are using
 *
 * Description: point to array and loop through
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
