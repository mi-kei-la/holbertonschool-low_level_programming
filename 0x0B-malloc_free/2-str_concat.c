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
	int i, j, l, m, len = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != 0; i++)
	{
	}

	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != 0; j++)
	{
	}

	len = i + j + 1;

	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);

	for (l = 0; s1[l] != 0; l++)
		new[l] = s1[l];
	for (m = 0; s2[m] != 0; m++, l++)
		new[l] = s2[m];
	new[l] = '\0';

	return (new);
	free(new);
}

