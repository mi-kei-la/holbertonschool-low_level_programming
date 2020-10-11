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
				return (s);
		}
	}
	return (0);
}

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

	while (*s >= 0)
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
/**
 * _memcpy - copy n bytes from src to dest
 *
 * @dest: parameter
 * @src: parameter
 * @n: memory size
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}

	return (dest);
}
