#include "main.h"

/**
* print_last_digit - display last digit
* @n: variable
* Return: last digit
*/

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
