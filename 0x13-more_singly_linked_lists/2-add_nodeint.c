#include "lists.h"

/*
* *add_nodeint - puts a node
* @head: 1st list node
* @n: the data
* Description: single list
* Return: 0
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *novo;

novo = malloc(sizeof(listint_t));
if (!novo)
return (NULL);
novo->n = n;
novo->next = *head;
*head = novo;
return (novo);
}

