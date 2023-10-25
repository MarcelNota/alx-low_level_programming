#include "main.h"

/**
 * _pow_recursion - displays the pow of a given value
 *
 * @x: base
 * @y: elevation
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
