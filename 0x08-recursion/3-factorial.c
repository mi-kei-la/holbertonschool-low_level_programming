#include "holberton.h"

/**
 * factorial - return factorial of a given number
 *
 * @n: parameter
 *
 * Return: factorial, or -1 if error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
