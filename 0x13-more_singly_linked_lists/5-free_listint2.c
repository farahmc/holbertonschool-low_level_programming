#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: pointer to the first element of a linked lise
 *
 * Description: free a list with no possible leaks
 * set head to NULL
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *start, *temp;

	if (head == NULL)
		return;

	start = *head;
	while (start != NULL)
	{
		temp = start;
		start = start->next;
		free(temp);
		*head = NULL;
	}

}
