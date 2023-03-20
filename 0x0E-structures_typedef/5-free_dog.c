#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that free dogs
 * @d: pointer d
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
