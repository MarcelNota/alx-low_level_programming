#include "main.h"

/**
 * _strdup - displays pointer
 * @str: string
 * Return: null for str null
 */

char *_strdup(char *str)
{
	int len = 0, i;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
}
