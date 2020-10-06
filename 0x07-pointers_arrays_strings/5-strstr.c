#include "holberton.h"

/**
 * _strstr - find a needle in a haystack
 *
 * @haystack: parameter
 * @needle: parameter
 *
 * Return: pointer to match, or null if none
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, locate;

	for (j = 0; haystack[j] != 0; j++)
	{
		for (locate = j, i = 0; needle[i] != 0; i++, locate++)
		{
			if (needle[i] != haystack[locate] || haystack[locate] == 0)
				break;
		}
		if (needle[i] == 0)
			return (haystack + j);
	}
	return (0);
}
