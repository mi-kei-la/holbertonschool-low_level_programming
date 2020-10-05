#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - find a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer to first ocurrence of c, or null if not found
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (*s != 0)
	{
		if (*s == c)
		{
			x = 1;
			break;
		}
		s++;
	}
	if (x != 0)
		return (s);
	else
		return (0);

}
