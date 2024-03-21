#include "main.h"

/**
*_islower - checks if its lowercase
*
* @c: alphabet checker
*
* Return: 1 if lower, else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
