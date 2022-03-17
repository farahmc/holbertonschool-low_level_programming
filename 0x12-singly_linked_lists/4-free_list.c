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
	free(head);
}
