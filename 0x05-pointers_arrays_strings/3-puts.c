#include "main.h"

/**
 * _puts - inserts a new line
 * @str: pointer to a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
