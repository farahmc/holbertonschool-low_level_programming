#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - add a node to a point in the list
 * @head: pointer to a pointer to the start of list
 * @n: data value
 * @idx: location to add new node
 *
 * Description: function to add a node to a given point in a linked list
 *
 * Return: NULL if failure, else address of the new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int count;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == idx)
		{
			new->n = n;
			new->next = temp->next;
			break;
		}
		temp = temp->next;
		count++;
	}

	return (new);
}
