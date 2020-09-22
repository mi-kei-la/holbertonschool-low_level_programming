#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (success)
 *
 * print_alphabet - prints alphabet followed by a new line
 */

void print_alphabet(void)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
