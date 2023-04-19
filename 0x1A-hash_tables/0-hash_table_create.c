#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size of the array.
 *
 * Return: if an error occurs - NULL.
 * Otherwise - a Pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigneed long int i;

	hash = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) *size);
	if (hash->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (ht);
}
