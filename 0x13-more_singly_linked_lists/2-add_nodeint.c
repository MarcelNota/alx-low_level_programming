#include "lists.h"

/**
 * add_nodeint - puts a node on the list
 * @head: the list 1st node
 * @n: insertion
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
