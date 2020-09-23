#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	natural();
	return (0);
}

/**
 * natural - sum multiples of 3 and 5
 *
 */

void natural(void)
{
	int count;
	int sum = 0;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
		{
			sum = count + sum;
		}
	}
	printf("%d\n", sum);
}
