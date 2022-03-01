#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- create an array of chars and initialise with a specific char
 * @size: size of array
 * @c: chars to be placed into array
 *
 * Description: use malloc to allocate memory to an array of chars
 * while loop to initialise and loop through array
 *
 * Return: Null if size is 0 or less
 * Null if array is null
 * array if chars are present
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	index = 0;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	while (index < size)
	{
		array[index] = c;
		index = index + 1;
	}
	return (array);
}
