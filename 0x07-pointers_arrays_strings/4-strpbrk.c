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
	int y;

	for (y = 0; s[y] != 0; s++)
	{
		for (x = 0; accept[x] != 0; x++)
		{
			if (s[y] == accept[x])
				break;
		}
		if (s[y] == accept[x])
			break;
	}
	if (s[y] == accept [x])
		return (s);
	else
		return (0);
}
