#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *aux = NULL, *ptr = NULL;

	if (ht != NULL) /*check if ht exists*/
	{
		for (i = 0; i < ht->size; i++) /*loop through ht*/
		{
			aux = ht->array[i];
			if (aux != NULL) /*check if node exists*/
			{
				while (ptr != NULL)
				{
					ptr = aux->next;
					free(aux->key);
					free(aux->value);
					free(aux);
				}
			}
			free(aux);
		}
		free(ht->array);
		free(ht);
	}
}
