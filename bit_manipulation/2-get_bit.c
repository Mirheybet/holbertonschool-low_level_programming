#include <stddef.h>
#include "main.h"

/**
 * get_bit - main
 * @n: var1
 * @index: var2
 * Return: minimum bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int indexcomp = sizeof(n) * 8;

	if (indexcomp == index || index > indexcomp)
	{
		return (-1);
	}

	else
	{
		return ((n >> index) & 1);
	}

}
