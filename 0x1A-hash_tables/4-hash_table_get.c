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
	unsigned int index = 0;
	hash_node_t *aux = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		aux = ht->array[index];
		while (aux != NULL)
		{
			if (strcmp(aux->key, key) == 0)
				return aux->value;
			if (aux->next == NULL)
				break;
			aux = aux->next;
		}
	}

	return (NULL);
}
