#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value
 * @ht: the table to search
 * @key: the key to search for
 *
 * Description: retrieve a value associated with a key
 *
 * Return: the value if it exists
 * else return NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (key == NULL || *key == '\0' || ht == NULL || ht->array == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
