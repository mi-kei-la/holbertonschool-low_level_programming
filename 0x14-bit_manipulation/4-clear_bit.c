#include "holberton.h"

/**
  * clear_bit - set specific bit to 0
  *
  * @n: pointer to int
  * @index: position of bit
  *
  * Return: 1 if it worked, -1 otherwise
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	mask = mask << index;
	mask = ~mask;
	*n  = *n & mask;
	return (1);

}
