#include "main.h"
/**
 * print_numbers - main
 * Return: zero
 */
void print_numbers(void)
{
	int  eded;

	for (eded = 0; eded <= 9; eded++)
	{
		if (eded == 2 || eded == 4)
			continue
		_putchar(eded + '0');
	}
	_putchar('\n');
}
