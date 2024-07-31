#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * get_dnodeint_at_index - main
 * @head: clone dblylinkedlist
 * @index: nth index
 * Return: head
 */



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth = index;

	if (head == NULL)
	{
		return (NULL);
	}

	else
	{
		for (; nth > 0; nth--)
		{
			if(head == NULL)
			{
				return(NULL);
			}
			head = head->next;
		}
		return (head);
	}

}
