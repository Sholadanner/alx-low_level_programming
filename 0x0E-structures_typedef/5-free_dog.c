#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * dog_t - dog to be freed
 * @d: pointer to the memory to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
