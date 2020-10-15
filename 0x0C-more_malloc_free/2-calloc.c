#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: number of elements of the array
 * @size: bytes each element occupies
 *
 * Return: pointer to memory, NULL otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

/*	for (x = 0; x < nmemb; x++)
	{
		arr[x] = 0;
	}
*/
	memset(arr, 0, (nmemb * size));
	return (arr);
}
