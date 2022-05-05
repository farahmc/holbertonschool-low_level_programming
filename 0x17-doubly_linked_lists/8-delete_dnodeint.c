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
 * delete_dnodeint_at_index- delete node at nth point
 * @head: pointer to pointer to start of linked list
 * @index: point at which to delete node
 *
 * Description: function to delete nth node
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count;

	if (*head == NULL || head == NULL)
		return (-1);

	count = list_len(*head);
	if (index > count)
		return (-1);

	while (index != 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
