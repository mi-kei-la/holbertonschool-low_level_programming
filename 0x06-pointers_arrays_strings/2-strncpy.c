#include "holberton.h"

/**
 * _strncpy - copy a string into another
 * taking byte sizes into account
 *
 * @dest: parameter - destination
 * @src: parameter - string
 * @n: parameter - bytes
 *
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len;
	int i;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
	{
	}

	for (i = 0; i != n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (src_len < n)
		dest[i] = '\0';

	return (dest);
}
