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
	char *words;

	va_list(args);

	va_start(args, n);

	for (; i < (int)n ; i++)
	{
		words = va_arg(args, char*);

		if (words == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", words);
		}

		if (separator != NULL && i != (int) n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
