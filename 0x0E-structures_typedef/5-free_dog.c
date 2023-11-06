#include "dog.h"

/**
 * free_dog - to let free
 * @d: the pointer
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
