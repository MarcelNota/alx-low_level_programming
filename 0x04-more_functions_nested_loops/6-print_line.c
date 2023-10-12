#include "main.h"

/**
 * print_line - prints to terminal
 *
 * @n: lines to be displayed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar ('\n');
	else
	{
		for (i = 1; i <= n; ++i)
		{
			_putchar('_');
		}
		_putchar ('\n');
	}
}
