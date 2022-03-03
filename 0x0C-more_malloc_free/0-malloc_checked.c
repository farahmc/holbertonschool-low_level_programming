#include <stdlib.h>
#include "main.h"

/**
* malloc_checked- allocates memory using malloc
* @b: amount of memory in bytes required
*
* Description: allocates memory using malloc
* exit with a value of 98 if memory is null
*
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
