#include "hash_tables.h"

/**
* key_index - return the index of a key
* @key: the key returning an index
* @size: size of the array
*
* Description: find the index of a given key
*
* Return: index of the key-value pair
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
