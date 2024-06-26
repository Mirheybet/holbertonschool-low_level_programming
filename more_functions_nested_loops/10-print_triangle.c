#include "main.h"

/**
 * print_triangle - main
 * @size: var 1
 */
void print_triangle(int size)
{
	int down, right;

	if (size > 0)
	{
		for (down = 1; down <= size; down++)
		{
			for (right = size - down; right > 0; size--)
				_putchar(' ');

			for (right = 0; right < down; right++)
				_putchar('#');

			if (down == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}



