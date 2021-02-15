#include "hash_tables.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int ret = 0;

	ht = hash_table_create(1024);
	ret = hash_table_set(ht, "betty", "holberton");
	printf("success\n");
	ret = hash_table_set(ht, "hetairas", "holberton");
	printf("%d, hetairas\n", ret);
	ret = hash_table_set(ht, "mentioner", "holberton");
	printf("%d, mentioner\n", ret);
	ret = hash_table_set(ht, "heliotropes", "holberton");
	printf("%d, heliotropes\n", ret);
	ret = hash_table_set(ht, "neurospora", "holberton");
	printf("%d, neurospora\n", ret);
	ret = hash_table_set(ht, "depravement", "holberton");
	printf("%d, depravement\n", ret);
	ret = hash_table_set(ht, "serafins", "holberton");
	printf("%d, serafins\n", ret);
	ret = hash_table_set(ht, "stylist", "holberton");
	printf("%d, stylist\n", ret);
	ret = hash_table_set(ht, "subgenera", "holberton");
	printf("%d, subgenera\n", ret);
	return (EXIT_SUCCESS);
}
