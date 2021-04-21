#include "search_algos.h"

/**
 * interpolation_search - Search a value in an array by interpolation.
 *
 * @array: Array to search in.
 * @size: Size of the array.
 * @value: Value being searched.
 *
 * Return: Index of value, -1 if not found or no array.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	int res;

	if (!array)
		return (-1);

	res = recursive_interpolation(array, low, high, value);

	return (res);
}

/**
 * recursive_interpolation - Recursive function for the
 * interpolation search algorithm.
 *
 * @array: Array to search in.
 * @low: Starting index of array.
 * @high: End index of the array.
 * @value: Value to search.
 *
 * Return: Index of value, -1 if not found.
 */

int recursive_interpolation(int *array, size_t low, size_t high, int value)
{
	size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

	if (low <= high)
	{

		if (pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			return (recursive_interpolation(array, pos + 1, high, value));

		if (array[pos] > value)
			return (recursive_interpolation(array, low, pos - 1, value));
	}

	return (-1);
}
