#include <stddef.h>
#include "main.h"

/**
 * set_bit - main
 * @n: var1
 * @index: var2
 *
 * Return: nth index to change 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int indexcomp = sizeof(n) * 8;

	if (index >= indexcomp)
	{
		return (-1);
	}
	else
	{
		*n |= 1 << index;
		return (1);
	}
}
