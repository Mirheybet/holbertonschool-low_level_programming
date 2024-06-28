#include "main.h"

/**
 * _strlen - main
 * @str: var 1
 *
 * Return: str-length
 */
size_t _strlen(char *str)
{
	size_t string_length = 0;

	while (*str++)
		string_length++;

	return (string_length);
}
