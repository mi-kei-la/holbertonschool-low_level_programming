#include "search_algos.h"

/**
 * binary_search - Perform a binary search on a given array.
 *
 * @array: Pointer to first value of array.
 * @size: Size of the array.
 * @value: Value to search.
 *
 * Return: Index of value, -1 if not found or no array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		/* Print subarray to search in. */
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;
		/* mid = (left + right) / 2; */
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
