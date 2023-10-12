#include"main.h"

/**
 * print_triangle - displays a triangle
 *
 * @size: shows the size
 *
 * Return: 0 
 */

void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; ++height)
		{
			for (base = 1; base <= size; ++base)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
