#include "main.h"
#include <stdlib.h>

/**
 * _calloc - mmain
 * @nmemb: var1
 * @size: var2
 *
 * Return: yaddas 1
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int calloc_index;
	char yaddas_1, yaddas_2;

	if (nmemb == 0 || size == 0)
		return (NULL);

	yaddas1 = malloc(size * nmemb);

	if (yaddas1 == NULL)
		return (NULL);

	yaddas2 = yaddas1;

	for (calloc_index = 0; calloc_index < (size * nmemb); calloc_index++)
		filler[index] = '\0';

	return (yaddas1);
}
