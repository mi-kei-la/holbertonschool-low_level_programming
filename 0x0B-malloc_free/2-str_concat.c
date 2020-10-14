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
	int i, j, l, m;
	char *new;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != 0; i++)
		{
		}
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] >= 0; j++)
		{
		}
	}
	new = malloc(sizeof(char) * (i + j));
	if (new == NULL)
		return (NULL);
	if (i != 0)
	{
		for (l = 0; l < i; l++)
			new[l] = s1[l];
	}
	if (j != 0)
	{
		for (m = 0; l + m < i + j; m++)
			new[l + m] = s2[m];
		new[l + m] = '\0';
	}
	return (new);
	free(new);
}

