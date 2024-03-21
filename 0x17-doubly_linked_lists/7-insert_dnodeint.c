#include "lists.h"

/**
 * insert_dnodeint_at_index - adds
 * @h: headeer
 * @idx: indexs
 * @n: date
 * Return: position of new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
