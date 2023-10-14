#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @a: array pointer
 * @n: integer
 * Description: Numbers are separated by comma
 * Numbers must be displayed in the same order they are stored 
 * only use _putchar to display
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
