#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add
 * @a: 1st variable
 * @b: 2nd
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: 1st variable
 * @b: 2nd
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 * @a: 1st variable
 * @b: 2nd
 * Return: 0
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - div
 * @a: 1st variable
 * @b: 2nd
 * Return: 0
 */

int op_div(int a, int b)

	if (b == 0)
{
	printf("Error\n");
	exit(100);
}

return (a / b);
}

/**
 * op_mod - mod
 * @a: 1st variable
 * @b: 2nd
 * Return: 0
 */
int op_mod(int a, int b)

if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
