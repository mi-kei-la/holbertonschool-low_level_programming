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
	unsigned long int arr = 0, index = 0;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL) /*check parameters*/
		return (0);

	arr = ht->size;
	index = key_index((const unsigned char *)key, arr); /*hash key*/

	new = malloc(sizeof(hash_node_t)); /*allocate memory for new node*/
	if (new == NULL)
		return (0);

	new->key = strdup(key); /*create new node*/
	new->value = strdup(value);

	if (ht->array[index] == NULL) /*add node to beginning of list*/
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
