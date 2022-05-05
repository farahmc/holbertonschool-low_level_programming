#include <stdlib.h>
#include <string.h>
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

int list_len(dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

/**
 * insert_dnodeint_at_index - add a node to a point in the list
 * @h: pointer to a pointer to the start of list
 * @n: data value
 * @idx: location to add new node
 *
 * Description: function to add a node to a given point in a linked list
 *
 * Return: NULL if failure, else address of the new element
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx != 0)
		return (NULL);

	count = list_len(*h);
	if (idx > (count + 1))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (temp->next == NULL)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
