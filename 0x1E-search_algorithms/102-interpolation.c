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
	size_t low = 0, high = size - 1, pos;

	if (!array || size == 0)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

	while (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;

		if (array[pos] > value)
			high = pos - 1;

		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);

}
