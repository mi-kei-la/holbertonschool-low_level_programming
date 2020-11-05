#include "holberton.h"

/**
  * set_bit - set specific bit to 1
  *
  * @n: pointer to int
  * @index: position of bit
  *
  * Return: 1 if it worked, -1 otherwise
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	printf("og value of n: %lu\n", *n);
	mask = mask << index;
	printf("value of mask: %lu\n", mask);
	*n += mask;
	printf("new value of n: %lu\n", *n);
	printf("end of test\n");
	return (1);

}
