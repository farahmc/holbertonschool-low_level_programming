#include <stdio.h>
#include "lists.h"

/**
 * list_len- function to return number of elements in list
 * @h: pointer to start of list
 *
 * Description: function to return number of elements in linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int index = 0;

	while (h != NULL)
	{
		h = h->next;
		index++;
	}

	return (index);
}
