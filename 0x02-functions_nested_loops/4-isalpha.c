#include "main.h"

/**
* _isalpha - checks if argument is alpha
*
* @c: entry
* Return: 1 for alpha, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
