#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint- add a node to the beginning of the list
 * @head: pointer to a pointer to the start of list
 * @n: value of new node
 *
 * Description: function to add a node to the beginning of a doubly linked list
 *
 * Return: NULL if failure, else address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	/* create new node and allocate memory */
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /*give it a value*/
	new_node->next = (*head); /*point next to old head */
	new_node->prev = NULL; /*point prev to NULL to indicate new head*/

	if ((*head) != NULL) /*point old head node prev to new node */
		(*head)->prev = new_node;
	*head = new_node; /*point head to new node */

	return (new_node);
}
