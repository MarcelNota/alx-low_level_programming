#include "lists.h"

/**
 * listint_len - elements
 * @h: the list
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}
