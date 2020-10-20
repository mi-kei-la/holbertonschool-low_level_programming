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
	dog_t *new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new = malloc(sizeof(struct dog));
	new_name = _strdup(name);
	new_owner = _strdup(owner);

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

char *_strdup(char *str)
{
	int i, j;
	char *new;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
	}

	new = malloc((sizeof(char) * i) + 1);

	if (new == NULL)
		return (NULL);

	for (j = 0; j != i; j++)
		new[j] = str[j];

	return (new);
	free(new);
}
