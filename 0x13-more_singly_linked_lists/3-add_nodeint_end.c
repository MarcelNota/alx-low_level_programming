#include "lists.h"

/*
* add_nodeint_end - node addition to the singly linked list
* @head: points
* @n: elem
* Return: 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *novo;
listint_t *alu = *head;
novo = malloc(sizeof(listint_t));
if (!novo)
return (NULL);
novo->n = n;
novo->next = NULL;
if (*head == NULL)
{
*head = novo;
return (novo);
}
while (alu->next)
alu = alu->next;
alu->next = novo;
return (novo);
}