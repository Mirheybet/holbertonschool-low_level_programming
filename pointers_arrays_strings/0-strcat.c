#include "main.h"

/**
 * strcat - main
 * @dest: varptr 1
 * @src: varptr 2
 *
 * Return: var @dest
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i]; i++)
		dest[length++] = src[i];

	return (dest);
}
