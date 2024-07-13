#include "main.h"
#include <stdlib.h>

/**
 * _strdup - main
 * @str: vp1
 *
 * Return: s2
 */
char *_strdup(char *str)
{
	int j;
	int size = 0;
	char *s2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		size++;
	}

	s2 = malloc(sizeof(char) * (size));

	if (s2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		s2[j] = str[j];
	}

	s2[size] = '\0';

	return (s2);
}
