#include "lists.h"

/**
 * free_listint_safe - the list
 * @h: 1st element
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
size_t turn = 0;
int low;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
low = *h - (*h)->next;
if (low > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
turn++;
}
else
{
free(*h);
*h = NULL;
turn++;
break;
}
}
*h = NULL;
return (len);
}
