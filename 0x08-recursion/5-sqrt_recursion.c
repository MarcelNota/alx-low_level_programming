#include "main.h"

/**
 * find_sqrt - square root of n
 *
 * @n: the number
 * @root: the root
 *
 * Return: 0
 */


int find_sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (find_sqrt(n, root + 1));
}


/**
 * _sqrt_recursion - numbers square root
 * @n: number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
