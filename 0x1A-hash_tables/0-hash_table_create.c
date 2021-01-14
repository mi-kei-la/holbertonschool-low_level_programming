#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 *
 * @size: size of the hash table
 *
 * Return: pointer to new hash table, NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	if (size != 0)
	{
		new = malloc(sizeof(hash_table_t));
		if (new == NULL)
			return (NULL);

		new->array = malloc(sizeof(int *) * size);
		if (new->array == NULL)
			return (NULL);

		new->size = size;
	}
	return (new);
}
