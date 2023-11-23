#include "lists.h"
/**
 * listint_len - elements
 * @h: the list
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
 size_t alu = 0;

 while (h)
 {
 alu++;
 h = h->next;
 }

 return (alu);
}
