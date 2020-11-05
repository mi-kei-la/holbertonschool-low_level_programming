#include "holberton.h"

/**
  * binary_to_uint - convert to decimal
  *
  * @b: binary number in form of a string
  *
  * Return: unsigned decimal
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int div = 1, sum = 0, i, j = 0, count = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != 0 && b[i] == 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i = j;
	for (; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		count++;
	}

	while (count > 1)
	{
		div = div * 2;
		count--;
	}

	for (; b[j] != 0; j++)
	{
		if (b[j] == '1')
			sum += div;
		div = div / 2;
	}
	return (sum);
}
