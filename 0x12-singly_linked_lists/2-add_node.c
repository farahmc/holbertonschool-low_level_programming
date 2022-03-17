#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
 * add_node- add a node to the beginning of the list
 * @head: pointer to a pointer to the start of list
 * @str: string to be copied
 *
 * Description: function to add a node to the beginning of a linked list
 *
 * Return: NULL if failure, else address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
