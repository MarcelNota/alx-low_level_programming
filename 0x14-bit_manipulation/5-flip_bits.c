#include "main.h"

/**
*flip_bits - bits
*@n: nr
*@m: nr
*Return: 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flipped = n ^ m;
int count = 0;
while (flipped)
{
if (flipped & 1)
count++;
flipped >>= 1;
}
return (count);
}
