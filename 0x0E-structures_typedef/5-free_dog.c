#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_dog - free dogs
  *
  * @d: parameter
  */

void free_dog(dog_t *d)
{
free(d->owner);
free(d->age);
free(d->name);
free(dog_t);
}
