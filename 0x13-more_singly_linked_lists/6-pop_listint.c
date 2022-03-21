#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return(0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
