#include "functions_pointers.h"

/**
 * array_iterator - iterrator
 * @array: the array
 * @size: the size
 * @action: the activity
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && != NULL && size> 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
