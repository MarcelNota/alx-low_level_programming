#include "lists.h"

/**
 * free_dlistint - funct
 * @head: pointer
 *
*/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
