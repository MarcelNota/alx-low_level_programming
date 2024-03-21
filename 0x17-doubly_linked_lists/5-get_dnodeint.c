#include "lists.h"


/**
 * get_dnodeint_at_index - list
 * @head: point
 * @index: in
 * Return: node
 *
*/


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (head && index)
	{
		head = head->next;
		index--;
	}
	return (head);
}

