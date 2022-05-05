#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of list
 * @head: pointer to the first element of a linked list
 * @index: index of the node, start at 0
 *
 * Description: traverse a list and return nth node
 *
 * Return: Null if node doesn't exist, else
 * the nth node of an index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	while (temp != NULL)
	{
		if (n == index)
			return (temp);
		n++;
		temp = temp->next;
	}
	return (NULL);
}
