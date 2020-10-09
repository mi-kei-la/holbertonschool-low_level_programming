#include "holberton.h"

/**
 * _memset - fill n bytes of memory with a constant byte
 *
 * @s: pointer to memory
 * @b: parameter
 * @n: size of bytes
 *
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}

	return (s);
}

/**
 * _strcmp - compare two strings
 *
 * @s1: parameter
 * @s2: parameter
 *
 * Return: difference of first unmatched char in ascii values
 */

int _strcmp(char *s1, char *s2)
{
	int x, ret;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			ret = s1[x] - s2[x];
			break;
		}
		else
			ret = 0;
	}
	return (ret);
}

/**
 * _strncpy - copy a string into another
 * taking byte sizes into account
 *
 * @dest: parameter - destination
 * @src: parameter - string
 * @n: parameter - bytes
 *
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i != n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

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


/**
 * _strcat - concatenate two strings
 *
 * @src: parameter
 * @dest: parameter
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int count;
	int temp;


	for (count = 0; dest[count] != '\0'; count++)
	{
	}

	for (temp = 0; src[temp] != '\0'; count++, temp++)
	{
		dest[count] = src[temp];
	}

	dest[count] = '\0';

	return (dest);
}
