#include "main.h"

/**
*clear_bit - displays psitn
*@n: nr
*@index: idx
*Return: 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);
*n &= ~(1 << index);
return (1);
}