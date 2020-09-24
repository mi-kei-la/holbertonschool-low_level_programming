#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}


/**
 * fizz_buzz - print numbers 1-100 substituting words
 *
 */

void fizz_buzz(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 15 == 0)
			printf("FizzBuzz ");
		else if (count % 5 == 0)
			printf("Buzz ");
		else if (count % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", count);
	}

	printf("\n");
}
