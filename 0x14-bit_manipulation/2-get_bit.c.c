#include "main.h"

/**
*get_bit - bit
*@n: nr
*@index: th idx
*Return:0
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
return ((n >> index) & 1);
}