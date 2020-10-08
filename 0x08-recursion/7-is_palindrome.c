#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - check if string is palindrome
 *
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int inicio = 0;
	int fin = _count(s) - 1;
	return(_pal_(s, inicio, fin));
}

/**
 * _pal_ - check if it is palindrome
 *
 * @s: string
 */

int _pal_(char *s, int inicio, int fin)
{
	if (inicio >= fin) /* base case */
		return (1);

	if (s[inicio] == s[fin] && inicio < fin)
		return (_pal_(s, inicio + 1, fin - 1));

	return (0);
}

/**
 * _count - count characters in a string
 *
 * @s: string
 *
 * Return: count
 */

int _count(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _count(s+1));
}
