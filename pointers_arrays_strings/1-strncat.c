#include "main.h"

/**
 * _strncat - main
 * @dest: varptr 1
 * @src: varptr 2
 * @n: var 3
 *
 * Return: var dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[length++] = src[i];

	return (dest);
}
