#include "main.h"
/**
 * more_numbers - main
 * Return: zero
 */
void more_numbers(void)
{
	int eded;

	for (eded = 0; eded <= 9; eded++)
	{
		for (eded = 0; eded <= 14; eded++)
		{
			if (eded > 9)
				_putchar(eded / 10 + '0');
			_putchar(eded % 10 + '0');
		}
	}
	_putchar('\n');


}
