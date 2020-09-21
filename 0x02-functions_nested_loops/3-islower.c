#include "holberton.h"

/**
 * _islower - entry point
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int r)
{
	if (r >= 97 && r <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
