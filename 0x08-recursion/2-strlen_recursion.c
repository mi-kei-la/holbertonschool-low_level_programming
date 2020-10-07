#include "holberton.h"

/**
 * _strlen_recursion - print length of string
 *
 * @s: string
 *
 * Return: count
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == 0)
		return (0);

	count = _strlen_recursion(s + 1);
	count++;
	return (count);
}
