#include "holberton.h"

/**
 * _strpbrk - search a string for any set of bytes
 *
 * @s: string
 * @accept: substring
 *
 * Return: pointer to first match
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	for ( ; *s != 0; s++)
	{
		for (x = 0; accept[x] != 0; x++)
		{
			if (*s == accept[x])
				break;
		}
		if (*s == accept[x])
			break;
	}

	return (s);
}
