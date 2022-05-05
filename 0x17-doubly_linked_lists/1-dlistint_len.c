#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len- function to return number of elements in list
 * @h: pointer to start of list
 *
 * Description: function to return number of elements in doubly linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int index = 0;

	while (h != NULL)
	{
		h = h->next;
		index++;
	}

	return (index);
}
