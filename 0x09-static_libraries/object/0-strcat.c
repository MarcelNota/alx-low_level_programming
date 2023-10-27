#include "main.h"

/**
 * _strcat - adds the strings
 *
 * @dest: destination
 * @src: string to be added
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	/* check the length of @dest */
	while (dest[i++])
		dest_len++;

	/* append scr to dest */
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
