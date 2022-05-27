#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: hash table to add to
 * @key: the key, can't be empty string
 * @value: value associated with key. can be empty
 *
 * Description: add or update an element to the hash table
 * if collision, add new node to beginning of list
 *
 * Return: 1 for success, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	if (ht->array[index] == NULL) /*create a new node for a new list */
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = ht->array[index]; /*create a new node for */
		ht->array[index] = new_node; /* existing list */
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	return (1);
}
