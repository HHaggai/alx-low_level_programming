#include "search_algos.h"

/**
  * jump_search - Searches for val in a sorted arr
  *               of integrs using jump search.
  * @array: A pointr to first element of the arr to search.
  * @size: The numb of elements in the arr.
  * @value: The val to search for.
  *
  * Return: If val is not present or arr is NULL, -1.
  *         Otherwise, first index where value is locatd.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	/* Check if arr is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calc jump step size */
	step = sqrt(size);

	/* Perform jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store prev jump position */
		i = jump;

		/* Update jump positn */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjust jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform linear search within identif range */
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Check if val is found and return corresponding index */
	return (array[i] == value ? (int)i : -1);
}
