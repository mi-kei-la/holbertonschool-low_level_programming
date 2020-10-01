#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * taking into account byte size
 *
 * @dest: parameter - first string
 * @src: parameter - second string
 * @n: parameter - bytes
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	

	return (dest);
}
