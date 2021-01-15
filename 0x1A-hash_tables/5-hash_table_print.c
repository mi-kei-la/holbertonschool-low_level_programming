#include "hash_tables.h"

/**
 * hash_table_print - print hash table key-value pairs
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *ptr = NULL;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (flag != 0)
					printf(", ");
				if (ht->array[i]->next != NULL)
				{
					ptr = ht->array[i]->next;
					while (ptr != NULL)
					{
					printf("'%s': '%s'", ptr->key, ptr->value);
					if (ptr->next == NULL)
						break;
					printf(", ");
					ptr = ptr->next;
					}
					printf(", ");
				}
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				flag += 1;
			}
			else
				continue;
		}
		printf("}\n");
	}
}
