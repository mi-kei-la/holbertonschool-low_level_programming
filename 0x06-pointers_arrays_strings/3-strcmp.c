#include "holberton.h"

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
