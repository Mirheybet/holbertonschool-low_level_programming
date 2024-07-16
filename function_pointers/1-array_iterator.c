#include "function_pointers.h"

/**
 * array_iterator - main
 * @size: v1
 * @array: vp2
 * @action: funptr
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == NULL || *array == NULL || *action == NULL)
		return;

	for (int i = 0; i < size; i++)
	{
		(*action(*array[i]));
	}
}
