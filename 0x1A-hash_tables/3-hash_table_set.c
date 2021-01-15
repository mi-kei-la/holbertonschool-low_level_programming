#include "hash_tables.h"

/**
 * hash_table_set - add key-value pair to hash table
 *
 * @ht: hash table to modify
 * @key: key to store
 * @value: value of the key
 *
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	hash_node_t *aux = NULL, *new = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		aux = ht->array[index];
		while (aux != NULL) /*check all nodes at index for repeated key*/
		{
			if (strcmp(aux->key, key) == 0)
			{
				free(aux->value);
				aux->value = strdup(value);
				return (1);
			}
			if (aux->next == NULL) /*no matches, end of list*/
				break;
			aux = aux->next;
		}
	}
	new = malloc(sizeof(hash_node_t)); /*create new node*/
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	if (ht->array[index] != NULL) /*linked list but no key match*/
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	else
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	return (1);
}
