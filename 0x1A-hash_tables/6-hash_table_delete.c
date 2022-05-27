#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 *
 * Description: delete a hash table, free all allocated memory
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp;

	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
