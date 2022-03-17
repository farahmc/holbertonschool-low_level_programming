#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list- free a list
 * @head: pointer to the first element of a linked lise
 *
 * Description: free a list with no possible leaks
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *start = head;
	list_t *temp; /*temp is always used to manipulate list*/

	while (start != NULL)
	{
		temp = start;
		start = start->next;
		free(temp->str);
		free(temp);
	}
}
