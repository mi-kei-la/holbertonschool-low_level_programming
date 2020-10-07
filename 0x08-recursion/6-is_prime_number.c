#include "holberton.h"

/**
 * is_prime_number - check if number is prime
 *
 * @n: number
 *
 * Return: 1 if true, 0 otherwise
 */

int is_prime_number(int n)
{
	int x = 0;

	if (n <= 1)
		return (0);

	x = _check(n, 2);

	if (x != 0)
		return (1);
	else
		return (0);
}

/**
 * _check - check if number is prime
 *
 * @n: parameter
 * @i: int
 *
 * Return: flag
 */

int _check(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_check(n, i + 1));
}
