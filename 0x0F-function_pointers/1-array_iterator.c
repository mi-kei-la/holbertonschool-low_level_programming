#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function for each element of the array
 *
 * @array: array
 * @size: number of elements of the array
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != 0 && size != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
