#include "holberton.h"

/**
 * _strspn - count bytes in the initial segment
 *
 * @s: string
 * @accept: init segment
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int x;

	while (*accept != 0)
	{
		for (x = 0; s[x] != 0; x++)
		{
			if (s[x] == *accept)
			{
				count++;
			}
		}
		accept++;
		if (*accept != s[x])
			break;
	}

	return (count);
}
