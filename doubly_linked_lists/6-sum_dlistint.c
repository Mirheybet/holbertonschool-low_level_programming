#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - main
 * @head: clone linkelist
 * Return: elements add proc
 */


int sum_dlistint(dlistint_t *head)
{
	int addproc = 0;

	while (head != NULL)
	{
		addproc += head->n;
		head = head->next;
	}
	return (addproc);
}
