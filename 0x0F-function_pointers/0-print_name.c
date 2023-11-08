#include "function_pointers.h"

/**
 * print_name - displays name
 * @name: name
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
