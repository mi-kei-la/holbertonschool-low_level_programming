#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers containing values from min to max
 *
 * @min: parameter
 * @max: parameter
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	unsigned int res, i;
	int *ptr;

	if (min > max)
		return (NULL);

	res = (max - min) + 1;
	ptr = malloc(sizeof(int) * res);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);

}
