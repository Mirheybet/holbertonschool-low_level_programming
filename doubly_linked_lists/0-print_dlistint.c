#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - main
 * @h: Clone of dblylink
 * Return: count of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t countnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		countnode++;
		h = h->next;
	}
	return (countnode);
}
