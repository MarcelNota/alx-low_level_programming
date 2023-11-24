#include "main.h"

/**
*set_bit - nr position
*@n: nr
*@index: position
*Return: 0
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);
*n |= (1 << index);
return (1);
}