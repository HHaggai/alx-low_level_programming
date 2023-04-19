#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prts each arr elem on a new line
 * @array: arr
 * @size: num of elem to print
 * @action: pointer to prt in regular or otherwise
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

