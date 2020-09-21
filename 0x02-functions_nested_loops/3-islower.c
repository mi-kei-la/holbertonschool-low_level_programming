#include "holberton.h"

/**
 * _islower - entry point
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
if (c <= 122 || c >= 97)
{
return (1);
}
else
{
return (0);
}
}
