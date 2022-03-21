#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of the list
 * @head: pointer to a pointer to the start of list
 * @n: data value
 *
 * Description: function to add a node to the beginning of a linked list
 *
 * Return: NULL if failure, else address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
