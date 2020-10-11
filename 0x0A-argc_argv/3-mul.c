#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* main - entry point
*
* @argc: parameter
* @argv: parameter
*
* Return: 0 if success, 1 otherwise
*/

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
