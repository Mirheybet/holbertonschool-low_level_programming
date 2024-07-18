#include <stdarg.c>
#include "variadic_functions.h"

/**
 * sum_them_all - main
 * @n: var1
 * Return: topla
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int topla = 0;

	topla += n;

	if (n == 0)
	{
		return (0);
	}

	for (int i = 0; i < n; i++)
	{
		topla += va_arg(args, int);
	}

	return (topla);
}
