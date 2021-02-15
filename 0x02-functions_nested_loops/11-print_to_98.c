#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers up to 98.
 *
 * @n: parameter
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		printf("%d\n", n);
	}
}
