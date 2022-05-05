#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end- add a new node to the end of the list
 * @head: pointer to pointer to start of list
 * @n: data of node to add
 *
 * Description: function to add a new node to the end of a doubly linked list
 *
 * Return: NULL if failed, else the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head; /*store head node */
	if (*head == NULL) /*if list empty, make new node head*/
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL) /*traverse list til last node*/
		temp = temp->next;

	temp->next = new_node; /*point last node to new node*/
	new_node->prev = temp; /*point new node's prev to old last node*/

	return (new_node);
}
