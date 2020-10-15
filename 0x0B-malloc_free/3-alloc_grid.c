#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to 2d array
 *
 * @width: parameter
 * @height: parameter
 * Return: NULL if negative parameters or on fail, pointer otherwise
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = malloc(sizeof(int) * height);

	if (arr == NULL)
		return (NULL);
	if (width == 0 || height == 0)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			arr[i] = (int *)malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
				arr[i][j] = 0;
		arr[i][j] = 0;
	}

	return (arr);
}
