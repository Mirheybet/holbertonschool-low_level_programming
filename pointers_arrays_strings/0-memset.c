#include "main.h"

/**
 * _memset - main
 * @s: vp1
 * @b: v2
 * @n: v3
 *
 * Return: mem
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
