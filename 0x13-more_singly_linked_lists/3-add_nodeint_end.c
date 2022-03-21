#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_nodeint_end- add a new node to the end of the list
 * @head: pointer to pointer to start of list
 * @n: data value of node to add
 *
 * Description: function to add a new node to the end of a singly linked list
 *
 * Return: NULL if failed, else the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(newNode));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = newNode;
	}
	return (newNode);
}
