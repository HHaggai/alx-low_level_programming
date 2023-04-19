#include "function_pointers.h"
/**
 * int_index - ret index place if compar = true, else -1
 * @array: arr
 * @size: size of elem in arr
 * @cmp: pointer to functn of one of the 3elements in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

