#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - count coins
 *
 * @argc: parameter
 * @argv: parameter
 *
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char **argv)
{
	int saldo = 0;
	int monedas = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	saldo = atoi(argv[1]);

	while (saldo >= 25)
	{
		monedas++;
		saldo = saldo - 25;
	}
	while (saldo >= 10)
	{
		monedas++;
		saldo = saldo - 10;
	}
	while (saldo >= 5)
	{
		monedas++;
		saldo = saldo - 5;
	}
	while (saldo >= 2)
	{
		monedas++;
		saldo = saldo - 2;
	}
	if (saldo == 1)
		monedas++;

	printf("%i\n", monedas);
	return (0);
}
