#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - main
 * @separator: vp1
 * @n: var2
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;

	va_list args;

	va_start(args, n);


	for ( ; i < (int) n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL  &&  i != (int) n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
