#include "main.h"

/**
 * _isupper - checks c
 *
 * @c: input to check
 *
 * Return: 1 if c is uppercase, 0 if its lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
