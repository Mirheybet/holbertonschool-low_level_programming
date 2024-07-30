#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - main
 * @h: Clone of dblylink
 * Return: count of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
        size_t countnode = 0;

        while (h != NULL)
        {
                countnode++;
                printf("%d\n",h->n);
                h = h->next;
        }
        return (countnode);
}
