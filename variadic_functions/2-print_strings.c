#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - main
 * @separator: vp1
 * @n: var2
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;

	va_list(args);

	va_start(args);

	for (; i < (int)n ; i++)
	{
		printf("%s\n", va_arg(args, char*));

		if (separator == NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
