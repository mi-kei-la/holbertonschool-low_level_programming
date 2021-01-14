#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_print(ht);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "subgenera", "holberton");
	hash_table_set(ht, "stylist", "holberton");
	hash_table_set(ht, "serafins", "holberton");
	hash_table_set(ht, "depravement", "holberton");
	hash_table_set(ht, "neurospora", "holberton");
	hash_table_set(ht, "heliotropes", "holberton");
	hash_table_set(ht, "mentioner", "holberton");
	hash_table_set(ht, "hetairas", "holberton");
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
