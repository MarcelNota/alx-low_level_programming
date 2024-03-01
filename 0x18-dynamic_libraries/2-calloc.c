#include "main.h"

/**
 * _calloc - memmory addition
 * @nmemb: nr
 * @size: size
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return (p);
}
