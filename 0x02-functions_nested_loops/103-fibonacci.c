#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	sum_fibonacci();
	return (0);
}

/**
 * sum_fibonacci - sum even fibonacci numbers
 *
 */

void sum_fibonacci(void)
{
	int a; /* count the loop */
	unsigned long int fib = 1;
	unsigned long int fib2;
	unsigned long int fib_ant = 0;
	unsigned long int sum = 0;

	for (a = 0; a < 32; a++)
	{
		fib2 = fib_ant + fib;
		if (fib2 % 2 == 0)
			sum += fib2;
		fib_ant = fib;
		fib = fib2;
	}
	printf("%lu\n", sum);
}
