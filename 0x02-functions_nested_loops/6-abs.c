#include "holberton.h"

/**
 * _abs - entry point
 *
 * write the absolut value of an integer
 *
 * Return: 0 (success)
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * (-1);
		return (a);
	}
	else 
	{
		return (a);
	}
	return (0);
}
