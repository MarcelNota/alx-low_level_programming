#include "lists.h"

/**
 * delete_nodeint_at_index - the list
 * @head: 1st element
 * @index: the index
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *alert = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}

alert = temp->next;
temp->next = alert->next;
free(alert);

return (1);
}
