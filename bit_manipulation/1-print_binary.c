#include <stddef.h>
#include "main.h"


/**
 * base2 - main
 * @n: change to base2
 */
void base2(unsigned long int n);

/**
 * print_binary - main
 * @n: var1
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(48);
	}

	else
	{
		base2(n);
	}
}

/**
 * base2 - main
 * @n: change to base2
 */

void base2(unsigned long int n)
{
	if (n == 0)
		return;
	base2(n >> 1);
	_putchar ((n & 1) + 48);
}
