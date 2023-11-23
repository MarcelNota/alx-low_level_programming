#include "lists.h"

/*
* *add_nodeint - puts a node
* @head: 1st list node
* @n: the data
* Description: single list
* Return: nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t *nuevo;

 nuevo = malloc(sizeof(listint_t));
 if (!nuevo)
 return (NULL);

 nuevo->n = n;
 nuevo->next = *head;
 *head = nuevo;

 return (nuevo);
}

