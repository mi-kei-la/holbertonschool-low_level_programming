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
	int i, j, k = 0, l = 0, m = 0, len;
	char *new;

	for (i = 0; s1[i] != 0; i++)
	{
	}

	for (j = 0; s2[j] >= 0; j++)
	{
	}

	len = i + j + 1;
	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);

	while (k < i)
	{
		new[k] = s1[l];
		k++;
		l++;
	}
	while (k <= len)
	{
		new[k] = s2[m];
		k++;
		m++;
	}

	return (new);
	free(new);
}

