#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- search for an integer
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to function comparing values
 *
 * Description: while i is less than size,
 * loop through array, if cmp does not return 0
 * return the element
 *
 * Return: if size is less than 0, return -1
 * if no element matches, return -1
 * else return the index of the first element for which
 * cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (array[i]);
}
