#include "main.h"

/**
 * print_square -  displays a square
 * @size: square size
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	else
		for (column = 0; column < size; column++)
		{
			for (row = 0; row < size; row++)
				_putchar(35);
			_putchar('\n');
		}
}
