#include "lists.h"

/**
* print_listint - displays list elements
 *@h: the list
 *Return: the nodes
 */
size_t print_listint(const listint_t *h)
{
	 size_t elem = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (elem);
}
