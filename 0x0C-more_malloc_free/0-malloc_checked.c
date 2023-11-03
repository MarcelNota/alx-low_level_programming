#include "main.h"

/**
* malloc_checked - memory alloction
* @b: bytes number
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
