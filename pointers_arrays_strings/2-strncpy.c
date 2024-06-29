#include "main.h"

/**
 * _strncpy - main
 * @dest: varptr 1
 * @src: varptr 2
 * @n: var 3
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
