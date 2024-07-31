#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - main
 * @head: clone of dbly link list
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *clone;

	while (head != NULL)
	{
		clone = (head)->next;
		free(head);
		head = clone;
	}
}
