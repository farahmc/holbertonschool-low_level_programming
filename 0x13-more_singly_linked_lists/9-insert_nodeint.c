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
	listint_t *new, *temp;
	unsigned int count, i;

	if (head == NULL)/* check if pointer points to list */
		return (NULL);

	if (*head == NULL && idx != 0)/* check if list has existing nodes*/
		return (NULL);

	count = list_len(*head);
	if (idx > (count + 1))/* check if idx > count */
		return (NULL);

	new = malloc(sizeof(*new));/* create new */
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)/*if index is 0*/
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	temp = *head;
	i = 0;
	while (i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
