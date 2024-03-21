#include "lists.h"

/**
 * sum_dlistint - list
 * @head: pointer
 * Return: addition
*/

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
