#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 *
 * @ptr: pointer to old_size
 * @old_size: parameter
 * @new_size: parameter
 * Return: pointer to new_size, NULL otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		free(ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
