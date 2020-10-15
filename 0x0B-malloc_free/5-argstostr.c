#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *argstostr - Concatenate two strings
  * @ac: argument count
  * @av: argument 'strings'
  * Return: conct
  */

char *argstostr(int ac, char **av)
{
	char *conct;
	int x, z, kont = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Go over every row of the subarray per every index */
	for (x = 0; x < ac; x++)
	{
		/* Count the total characters of every string (sub array) except the null byte */
		for (z = 0; av[x][z] != '\0'; z++)
		{
			kont++;
		}
	}
	/* Allocate the memory needed for the 2D array */
	/* Size = Count of chars + the amount of arguments (for the new lines) + 1 */
	conct = malloc(sizeof(char) * kont + ac + 1);
	
	if (conct == NULL)
		return (NULL);

	kont = 0;
	/* Run every string and assign value until reaching null
	then add a new line and repeat for next argument (string) */
	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z] != '\0'; z++, kont++)
		{
			conct[kont] = av[x][z];
		}
		conct[kont] = '\n';
		kont++;
	}
	return (conct);
}
