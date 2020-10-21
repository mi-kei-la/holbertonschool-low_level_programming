#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - do basic calculation
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if success
 * 98 if too many arguments
 * 99 if incorrect operator
 * 100 if division by 0
 */

int main(int argc, char **argv)
{
	int x;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0)
	    && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	if (strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 ||
	   strcmp(argv[2], "*") == 0 || strcmp(argv[2], "/") == 0
	   || strcmp(argv[2], "%") == 0)
	{
		x = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", x);
		return (0);
	}
	printf("Error\n");
	return (99);
}
