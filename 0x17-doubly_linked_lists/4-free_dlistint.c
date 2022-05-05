#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint- free a list
 * @head: pointer to the first element of a linked lise
 *
 * Description: free a list with no possible leaks
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
