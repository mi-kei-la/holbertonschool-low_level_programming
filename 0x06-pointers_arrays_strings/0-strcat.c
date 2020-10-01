#include "holberton.h"

/**
 * _strcat - concatenate two strings
 *
 * @src: parameter
 * @dest: parameter
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int count;
	int temp;


	for (count = 0; dest[count] != '\0'; count++)
	{
	}

	for (temp = 0; src[temp] != '\0'; count++, temp++)
	{
		dest[count] = src[temp];
	}

	dest[count] = '\0';

	return (dest);
}
