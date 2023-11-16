i#include "lists.h"

/**
 * list_len - number of elements on list
 * @h: linked list
 * Return: elements number
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
