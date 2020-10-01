#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - change string to upper
 *
 * @n: string parameter
 *
 * Return: string in uppercase
 */

char *string_toupper(char *n)
{
	int x;

	for (x = 0; n[x] != '\0'; x++)
	{
		if (n[x] >= 97 && n[x] <= 122)
			n[x] = n[x] - 32;
	}

	return (n);
}
