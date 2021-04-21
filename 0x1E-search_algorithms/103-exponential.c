#include "search_algos.h"

/**
 * exponential_search - Exponentially search a value in an array.
 *
 * @array: Array to search in.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of value, -1 if not found or no array.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t exp = 1, max = 0, i, mid;

	if (!array || size == 0)
		return (-1);

	while (exp < size && array[exp] < value)
	{
		printf("Value checked array[%zu] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}
	if (exp == size)
		max = exp - 1;
	else
		max = exp;
	exp = exp / 2;

	printf("Value found between indexes [%zu] and [%zu]\n", exp, max);

	while (exp <= max)
	{
		/* Print subarray to search in. */
		printf("Searching in array: ");
		for (i = exp; i < max; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = exp + (max - exp) / 2;
		if (array[mid] < value)
			exp = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
