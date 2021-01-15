#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned int i;
    hash_node_t *aux = NULL;

    if (ht != NULL) /*check if ht exists*/
    {
        for (i = 0; i < ht->size; i++) /*loop through ht*/
        {
            if (ht->array[i] != NULL) /*check if node exists*/
            {
                aux = ht->array[i];
                if (ht->array[i]->next != NULL)
                    ht->array[i] = ht->array[i]->next;
                free(aux->key);
                free(aux->value);
                free(aux);
            }
            free(ht->array[i]);
        }
        free(ht->array);
        free(ht);
    }
}
