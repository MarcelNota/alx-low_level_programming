#include "main.h"

/**
 * _calloc - allocation of memmory
 * @nmemb: elements number
 * @size: size of bytes
 *
 * Return: 0, null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	fill = mem;

	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (mem);
}
