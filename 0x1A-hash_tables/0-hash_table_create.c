#include "hash_tables.h"

/**
* hash_table_create - create a hash table
* @size: size of the array
*
* Description: create a hash table
*
* Return: Null if array is empty
* else pointer to the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (table->array == NULL)
		return (NULL);

	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
