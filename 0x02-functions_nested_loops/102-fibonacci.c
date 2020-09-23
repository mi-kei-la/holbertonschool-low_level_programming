#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0 (always success)
 */

int main(void)
{
	fibonacci();
	return (0);
}

/**
 * fibonacci - print 50 fibonacci numbers
 */

void fibonacci(void)
{
	int a;
	unsigned long int fib = 1;
	unsigned long int fib2;
	unsigned long int fib_ant = 0;

	for (a = 0; a < 50; a++)
	{
		fib2 = fib + fib_ant;
		printf("%lu", fib2);
		fib_ant = fib;
		fib = fib2;

		if (a < 49)
			printf(", ");
		else
			printf("\n");
	}
}
