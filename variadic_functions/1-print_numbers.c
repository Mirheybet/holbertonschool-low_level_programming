#include <stdarg.h>
#include "variadic_functions"

/**
 * print_numbers - main
 * @separator: vp1
 * @n: var2
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int i = 0;

	for ( ; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		printf("%s", seperator);
	}
}
