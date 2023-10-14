#include "main.h"

/**
 * swap_int - change value of a and b
 * @a: first pointer
 * @b: second pointer 
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
