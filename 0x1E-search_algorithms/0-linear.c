#include "search_algos.h"

/**
  * linear_search - Searches for a val in an arry
  *                 of integers using linear search.
  * @array: A pointer to the first element of the arry to search.
  * @size: The numb of elements in the arry.
  * @value: The val to search for.
  *
  * Return: If the val is not present or the arry is NULL, -1.
  *         Otherwise, the first index where the val is located.
  *
  * Description: Prints a val every time it is compared in the arry.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
