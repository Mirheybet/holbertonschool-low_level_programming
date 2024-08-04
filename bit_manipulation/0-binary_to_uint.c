#include "main.h"
#include <stddef.h>
/**
 * power - main1
 * @a: var1
 * Return: power
 */

int power(int a)
{
	int pow = 1, i;

	if (a == 0)
	{
		return (1);
	}
	for (i = 0; i < a; i++)
	{
		pow *= 2;
	}
	return (pow);
}

/**
 * binary_to_uint - main2
 * @b: for str
 * Return: binary to base10
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0, size = 0;
	int nb, length;
	int result = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		size++;
		index++;
	}
	length = size - 1;

	for (index = 0; index < size; index++)
	{
		nb = (b[index]) - '0';
		if (nb == 0)
		{
			result += 0;
			length--;
		}

		else if (nb == 1)
		{
			result += power(length);
			length--;
		}

		else
		{
			return (0);
		}
	}
	return (result);
}
