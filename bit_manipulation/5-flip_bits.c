#include <stddef.h>
#include "main.h"

/**
 * flip_bits - Finds the couunt of bits that differs.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of different bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  xor, count1 = 0;

	xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
			count1++;
		xor >>= 1;
	}
	return (count1);
}
