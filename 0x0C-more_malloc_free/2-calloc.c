#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	return (arr);
}
