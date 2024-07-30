#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - main
 * @head: dblyptr
 * @n: var1
 * Return: backnode
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *backnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (backnode == NULL)
	{
		return (NULL);
	}

	backnode->n = n;
	backnode->prev = *head;
	backnode->next = NULL;

	if (*head == NULL)
	{
		(*head)->next = backnode;
	}

	*head = backnode;
	return (backnode);

}
