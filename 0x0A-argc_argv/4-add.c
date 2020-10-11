#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>
/**
  * main - entry point
  * @argc: - count
  * @argv: - index
  * Return: add
  */

int main(int argc, char **argv)
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		if ((atoi(argv[i]) == 0 && *argv[i] != '0') ||
				(atoi(argv[i]) < 0) || (argv[i][0] == '+'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%i\n", sum);
	return (0);
}
