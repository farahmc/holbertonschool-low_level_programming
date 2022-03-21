#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: pointer to a pointer to the first element of a linked lise
 *
 * Description: delete the head node of a linked list
 *
 * Return: Null if linked list is empty, else return the data in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
