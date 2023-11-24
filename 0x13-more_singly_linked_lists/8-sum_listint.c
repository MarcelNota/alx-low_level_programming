#include "lists.h"

/**
 * sum_listint - the list
 * @head: 1st list element
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int dim = 0;
listint_t *temp = head;
while (temp)
{
dim += temp->n;
temp = temp->next;
}
return (dim);
}
