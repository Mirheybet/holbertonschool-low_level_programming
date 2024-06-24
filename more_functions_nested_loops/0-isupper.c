#include "holberton.h"

/**
 * _isupper - main
 * @c: The character to be checked.
 *
 * Return: zero
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
