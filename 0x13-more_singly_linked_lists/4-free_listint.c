#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the first element of a linked lise
 *
 * Description: free a list with no possible leaks
 *
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *start = head;
	listint_t *temp;

	while (start != NULL)
	{
		temp = start;
		start = start->next;
		free(temp);
	}
}
