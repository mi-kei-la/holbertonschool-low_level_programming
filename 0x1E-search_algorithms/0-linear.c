#include "search_algos.h"

/**
 * linear_search - Search for a value in an array of integers
 * by doing a linear search.
 *
 * @array: Pointer to first value of array.
 * @size: Size of said array.
 * @value: Value to search in the array.
 *
 * Return: First index of value, -1 if not found or no array.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (size == 0 || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
