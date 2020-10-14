B#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of chars using malloc
 *
 * @size: parameter
 * @c: character
 *
 * Return: pointer to array, or NULL if it fails or size == 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || arr == NULL)
		return (0);
	while (i != size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
	free(arr);
}
