#include "holberton.h"


/**
  * get_bit - get value of bit at given index
  *
  * @n: parameter
  * @index: index
  *
  * Return: value of bit, -1 otherwise
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == 0)
		return (0);

	mask = mask << index;

	if ((n & mask) == 0)
		return (0);
	else if ((n & mask) != 0)
		return (1);
	else
		return (-1);
}
