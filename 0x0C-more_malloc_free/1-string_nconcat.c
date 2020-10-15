#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings until n
 *
 * @s1: first string
 * @s2: second string
 * @n: parameter
 *
 * Return: pointer to new string, NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, x, y;
	char *new;

	if (s1 == NULL) /* if NULL is passed, treat it as an empty string */
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != 0; len1++) /* count length of s1 */
	{
	}

	for (len2 = 0; s2[len2] != 0 && len2 <= n; len2++) /* count length of s2 up to n */
	{
	}

	new = malloc(sizeof(char) * (len1 + len2) + 1); /* assign mem, flag */
	if (new == NULL)
		return (NULL);

	for (x = 0; s1[x] != 0; x++)
		new[x] = s1[x];

	for (y = 0; s2[y] != 0 && y < n; y++)
		new[x + y] = s2[y];

	new[x + y] = '\0';

	return (new);
}
