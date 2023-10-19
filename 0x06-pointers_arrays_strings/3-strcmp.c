#include "main.h"

/**
 * _strcmp - compare strings
 *
 * @s1: 1st string pointer
 * @s2:2nd string pointer
 *
 * Return: 0
 */


int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (*s1 - *s2);
}
