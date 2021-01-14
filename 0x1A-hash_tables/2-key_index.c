#include "hash_tables.h"

/**
 * key_index - return the index of a key
 *
 * @key: key to search
 * @size: size of the array of the hash table
 *
 * Return: index of key (hashed key mod size)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_key = 0, ret_value = 0;

	hashed_key = hash_djb2(key);
	ret_value = hashed_key % size;

	return (ret_value);
}

