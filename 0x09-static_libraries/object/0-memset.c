#include "main.h"

/**
 * *_memset - displays constant
 * @s: the pointer
 * @b: the constant
 * @n: the byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
