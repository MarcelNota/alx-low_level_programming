#include "lists.h"

/**
 * find_listint_loop - the list
 * @head: 1st element
 * Return: 0
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *up = head;
listint_t *down = head;
if (!head)
return (NULL);
while (up && down && down->next)
{
down = fast->next->next;
up = up->next;
if (down == up)
{
up = head;
while (up != down)
{
up = up->next;
down = down->next;
}
return (fast);
}
}
return (NULL);
}
