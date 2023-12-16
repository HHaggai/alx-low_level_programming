#include "search_algos.h"

/**
  * interpolation_search - Searches for a val in a sorted arr
  *                        of integrs using interpolation search.
  * @array: A pointr to first element of the arr to search.
  * @size: The numb of elements in the arr.
  * @value: The val to search for.
  *
  * Return: If the val is not present or the arr is NULL, -1.
  *         Otherwise, the first index where val is located.
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	/* Check if the arr is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
