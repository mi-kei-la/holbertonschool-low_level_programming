#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("000000010101100110101");
	printf("%u\n", n);
	n = binary_to_uint("111111111111111111111111111111111111111111111111111111111111111");
	printf("%u\n", n);
	n = binary_to_uint("000000101011001");
	printf("%u\n", n);
	n = binary_to_uint("001111111111111111111111111111111");
	printf("%u\n", n);
	n = binary_to_uint("10000000000000000000000000000000");
	printf("%u\n", n);
	return (0);
}
