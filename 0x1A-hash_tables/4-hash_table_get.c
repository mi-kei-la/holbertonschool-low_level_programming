#include "hash_tables.h"

/**
 * hash_table_get - get value of a given key
 *
 * @ht: hash table to search in
 * @key: given key
 *
 * Return: value associated to the element, or NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int arr = 0, index = 0, hashed_key = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	arr = ht->size;
	hashed_key = hash_djb2((const unsigned char *)key);
	index = hashed_key % arr;

	if (ht->array[index] != NULL)
		return (ht->array[index]->value);

	return (NULL);
}
