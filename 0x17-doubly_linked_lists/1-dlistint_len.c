#include "lists.h"

/**
 * dlistint_len - elements numbers
 * @h: the pointer
 * Return: nrs
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
