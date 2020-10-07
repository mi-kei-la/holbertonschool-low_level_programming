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
	int flag = 0;

	flag = _pal_(s);
	if (flag != 0)
		return (1);
	else
		return (0);
}

/**
 * _pal_ - check if it is palindrome
 *
 * @s: string
 */

int _pal_(char *s)
{
	int i = 1, len = 0, flag = 0;
	char *x, *y;

	len = _count(s);
	x = s;
	y = s + len;
	printf("%i",len);
	if (x == y || y == s)
		return (flag);
	else if (*(x + i) == *(y - i))
	{
		i++;
		flag++;
		return(_pal_(s));
	}
	printf("%i", flag);
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
	int i = 0;

	if (*s == 0)
		return (i);
	i++;
	i = _count(s + 1);
	return (i);
}
