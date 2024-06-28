#include "main.h"

/**
 * *_strcpy - main
 * @dest: var 1
 * @src: var 2
 *
 * Return: parametr dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
