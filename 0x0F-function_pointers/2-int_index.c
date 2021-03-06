#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer in an array
 *
 * @array: parameter
 * @size: size of array
 * @cmp: function to compare
 * Return: array index of first match, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0)
		return (-1);

	if (cmp != 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
