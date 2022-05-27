#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table to print
 *
 * Description: print the hash table in order they appear
 * in the array
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s', ", temp->key, temp->value);
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
