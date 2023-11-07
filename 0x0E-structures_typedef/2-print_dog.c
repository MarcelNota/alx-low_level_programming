#include "dog.h"

/**
 * print_dog - displays the structure created
 * @d: the pointer
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)");
printf("Age: %f\n", (d->Age) ? d->Age : 0);
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
}
