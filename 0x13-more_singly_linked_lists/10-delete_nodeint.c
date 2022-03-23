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

int list_len(const listint_t *h)
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
 * delete_nodeint_at_index- delete node at nth point
 * @head: pointer to pointer to start of linked list
 * @index: point at which to delete node
 *
 * Description: function to delete nth node
 *
 * Return: address of new node, else return Null
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int count, i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	count = list_len(*head);
	if (index > count)
		return (-1);

	temp = *head;
	next = temp->next->next;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (index == i)
		{
			next = temp->next->next;
			temp->next = next;
			i++;
			return (1);
		}
		temp = temp->next;
	}
	return (1);
}
