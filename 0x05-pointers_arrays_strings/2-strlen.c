#include "main.h"

/**
 * _strlen - check size of string
 * @s: string to be checked
 *
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
