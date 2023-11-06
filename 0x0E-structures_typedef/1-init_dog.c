#include "dog.h"

/**
 * init_dog - variable initialization
 * @d: the pointer
 * @name: pointer
 * @age: the age
 * @owner: name of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
