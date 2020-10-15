#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_grid - Free space of previous grid
  * @grid: grid
  * @height: height
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int x;
	
	/* Free the allocated memory for the grid from the previous task */
	/* Iterate and 'free' every sub array of the index */
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	
	/* Free the memory of the main array */
	free(grid);
}
