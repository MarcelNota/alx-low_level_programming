#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Destination string
 * @src: Source
 * @n: Size of src
 *
 * Return: The pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	/* checks the lenght of dest */
	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);

}
