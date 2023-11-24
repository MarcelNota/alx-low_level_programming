#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - list
 * @head: 1st element
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *cake, *marte;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
cake = head->next;
marte = (head->next)->next;
while (marte)
{
if (cake == marte)
{
cake = head;
while (cake != marte)
{
nude++;
cake = cake->next;
marte = marte->next;
}
cake = cake->next;
while (cake != marte)
{
nude++;
cake = cake->next;
}
return (nude);
}
cake = cake->next;
marte = (marte->next)->next;
}
return (0);
}
/**
 * print_listint_safe - displays list
 * @head: 1st element
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nude, index = 0;
nude = looped_listint_len(head);
if (nude == 0)
{
for (; head != NULL; nude++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nude; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nude);
}
