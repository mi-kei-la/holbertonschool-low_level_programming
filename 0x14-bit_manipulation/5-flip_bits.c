#include <limits.h>
#include "holberton.h"

/**
  * flip_bits - count bits to flip
  *
  * @n: parameter
  * @m: parameter
  * Return: total amount
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 4294967296, var = 0, count = 0;

	if (n >= ULONG_MAX || m >= ULONG_MAX)
		return (-1);
	var = (n ^ m);
	while (mask <= 64)
	{
		if ((var & mask) != 0)
			count++;
		mask = mask >> 1;
	}
	return (count);
}

