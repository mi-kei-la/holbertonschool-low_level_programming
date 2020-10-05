#include "holberton.h"

/**
 * _memcpy - copy n bytes from src to dest
 *
 * @dest: parameter
 * @src: parameter
 * @n: memory size
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}

	return (dest);
}
