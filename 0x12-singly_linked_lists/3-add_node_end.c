#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen- counts number of characters in string
 * @s: string to be counted
 *
 * Description: loop to count number of characters in string
 * that is lcated by a pointer
 *
 * Return: number of characters in string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}

/**
 * add_node_end- add a new node to the end of the list
 * @head: pointer to pointer to start of list
 * @str: data of node to add
 *
 * Description: function to add a new node to the end of a singly linked list
 *
 * Return: NULL if failed, else the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	/*create a new node and allocate memory*/
	newNode = malloc(sizeof(newNode));
	if (newNode == NULL)
		return (NULL);

	/*give a value by copying string - remember strdup also mallocs*/
	newNode->str = strdup(str);
	/*if str is null, free memory*/
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = _strlen(newNode->str);
	/*next is null because it is the last in the list */
	newNode->next = NULL;
	/*if head is null, it is an empty list*/
	if (*head == NULL)
		*head = newNode;
	/*otherwise, find the last node and set it to the new node*/
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = newNode;
	}
	return (newNode);
}
