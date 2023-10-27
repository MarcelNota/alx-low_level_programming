#include "main.h"

/**
 * _strlen - verify string size
 * @s: the string
 *
 * Return: size of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
