#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * **alloc_grid - Concatenate two strings
  * @width: string 1
  * @height: string 2
  * Return: null if malloc fail, return pointer
  */

int **alloc_grid(int width, int height)
{
	int x;
	int **grid;

	/* Contemplate if width or height doesn't have any value (return error) */
	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	/* Contemplate if memory is allocated into 'grid' (return error) */
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	/* Go over every index to every row */
	for (x = 0; x < height; x++)
	{
		/* Assign memory to every column for every index of row */
		grid[x] = (int *)malloc(sizeof(int) * width);
		
		/* If memory allocation fails in any iteration, free the memory and return NULL */
		/* Probably don't need this, maybe the 'if' check and return NULL */
		if  (grid[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
