#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string, return pointer to it
 *
 * @str: original string
 *
 * Return: pointer to duplicated string, NULL otherwise
 */

char *_strdup(char *str)
{
	int i, j;
	char *new;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
	}

	new = malloc((sizeof(char) * i) + 1);

	if (new == NULL)
		return (NULL);

	for (j = 0; j != i; j++)
		new[j] = str[j];

	return (new);
	free(new);
}
