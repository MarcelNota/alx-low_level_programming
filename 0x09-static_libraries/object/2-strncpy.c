#include "main.h"


/**
 * _strncpy - copy characters
 *
 * @dest: where they gonna be stored
 * @src: string source
 * @n: size of numbers
 *
 * Return: the pointer
 */


char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0, i = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
