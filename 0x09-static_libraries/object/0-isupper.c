#include "main.h"

/**
 * _isupper - controls if is a uppercase or not
 *
 * @c: variable to check
 *
 * Return: 1 if uppercase, 0 if lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
