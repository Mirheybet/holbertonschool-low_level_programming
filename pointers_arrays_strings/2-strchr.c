#include "main.h"

/**
 * _strchr - main
 * @s: vp1
 * @c: v2
 *
 * Return: s+index
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
