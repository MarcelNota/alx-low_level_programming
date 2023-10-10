#include "main.h"

/**
* print_alphabet_x10 - prints in lower case
*
*/

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c <= 122; c++)
			_putchar(c);
		_putchar('\n');
	}
}
