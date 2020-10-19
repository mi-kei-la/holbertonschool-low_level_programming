#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dog_t - create a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	struct dog *new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new = malloc(sizeof(struct dog));

	new_name = name;
	new_owner = owner;

	if (new == NULL)
		return (NULL);
	else
	{
		new->name = new_name;
		new->age = age;
		new->owner = new_owner;
	}

	return (new);
}

/**
 * *_strcpy - copy a string into another
 *
 * @src: source parameter
 * @dest: parameter destination
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int count, x;

	for (count = 0; src[count] != '\0'; count++)
	{
	}

	for (x = 0; x <= count; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
