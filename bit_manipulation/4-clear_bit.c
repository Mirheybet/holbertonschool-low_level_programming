#include <stddef.h>
#include "main.h"


/**
 * clear_bit - main
 * @n: vp1
 * @index: v1
 * Return: nth to change zero
 *
 */

int  clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int indexcomp = sizeof(n) * 8;

	if (index >= indexcomp)
	{
		return (-1);
	}

	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
