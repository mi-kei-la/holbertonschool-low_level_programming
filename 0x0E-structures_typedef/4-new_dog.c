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
	struct dog_t *new;
	int i, j, i2, j2;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new = malloc(sizeof(struct dog));

	for (i = 0; name[i] != 0; i++)
	{
	}

	for (j = 0; owner[j] != 0; j++)
	{
	}

	new_name = malloc(sizeof(char) * i);
	new_owner = malloc(sizeof(char) * j);

	for (i2 = 0; i2 <= i; i2++)
		new_name[i2] = name[i2];
	new_name[i2] = '\0';
	
	for (j2 = 0; j2 <= j; j2++)
		new_owner[j2] = owner[j2];
	new_owner[j2] = '\0';

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
