#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - copy a string into another
 *
 * @src: source parameter
 * @dest: parameter destination
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int count, x;

	for (count = 0; src[count] != '\0'; count++)
	{
	}

	for (x = 0; x <= count; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
