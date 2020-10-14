#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: parameter
 * @s2: parameter
 *
 * Return: pointer to new string, NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l = 0, m = 0, len;
	char *new;

	for (i = 0; s1[i] != 0; i++)
	{
	}

	for (j = 0; s2[j] >= 0; j++)
	{
	}

	len = i + j;
	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);

	while (l < i)
	{
		new[l] = s1[l];
		l++;
	}
	while (l + m <= len)
	{
		new[l + m] = s2[m];
		m++;
	}
	new[l+m] = '\0';

	return (new);
	free(new);
}

