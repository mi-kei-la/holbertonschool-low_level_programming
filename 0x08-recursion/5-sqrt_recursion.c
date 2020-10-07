B#include "holberton.h"

/**
 * _sqrt_recursion - find the natural square root of a number
 *
 * @n: parameter
 *
 * Return: square root, or -1 if not found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (_rec(n, 2));
}

/**
 * _rec - increment b and check for root
 *
 * @n: parameter
 * @b: divider
 *
 * Return: root
 */

int _rec(int n, int b)
{
	if (b * b == n)
		return (b);
	else if (b * b > n)
		return (-1);
	return (_rec(n, b + 1));
}
