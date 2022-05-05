#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - return sum of data
 * @head: pointer to the first element of a linked list
 *
 * Description: add all values of data in nodes of a linked list
 *
 * Return: 0 if list is empty, else return sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
