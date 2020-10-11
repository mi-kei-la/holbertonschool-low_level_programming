#include "holberton.h"
#include <stdio.h>

/**
* main - entry point
*
* Return: 0
*
* @argc: parameter
* @argv: parameter
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
