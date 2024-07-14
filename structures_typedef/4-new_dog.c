#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - main1
 * @str: vp1
 *
 * Return: size
 */
int _strlen(char *str)
{
	int size = 0;

	while (*str++)
		size++;

	return (size);
}

/**
 * _strcopy - main2
 * @dest: vp1
 * @src: vp2
 *
 * Return: vp1
 */
char *_strcopy(char *dest, char *src)
{
	int strcopy_index = 0;

	for (strcopy_index = 0; src[strcopy_index]; strcopy_index++)
		dest[strcopy_index] = src[strcopy_index];

	dest[strcopy_index] = '\0';

	return (dest);
}
