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
	unsigned int y;

	for (x = 0; s[x] != 0; x++)
	{
		for (y = 0; accept[y] != 0; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
		if (count == x)
			break;
	}

	return (count);
}
