#include "holberton.h"

/**
 * _memset - fill n bytes of memory with a constant byte
 *
 * @s: pointer to memory
 * @b: parameter
 * @n: size of bytes
 *
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}

	return (s);
}
