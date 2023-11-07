#include "dog.h"
#include "stdio.h"

/**
 * print_dog - displays the structure created
 * @d: the pointer
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
		return;

	if (d->name == NULL)
		printf("nill\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("nill\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("nill\n");
	else
		printf("Owner: %s\n", d->owner);
}
