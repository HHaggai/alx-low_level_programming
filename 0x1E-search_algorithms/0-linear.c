#include "search_algos.h"

/**
 * linear_search - Searches for a val in an arr
 *                 of integrs using linear search.
 * @array: A pointr to first element of the arr to search.
 * @size: The num of elements in the arr.
 * @value: The val to search for.
 *
 * Return: If the val is not present or the arr is NULL, -1.
 *         Otherwise, the first index where the val is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the arr is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the arr */
	for (i = 0; i < size; i++)
	{
		/* Print the val being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* If the value is found */
		if (array[i] == value)

			/* Return the index of the value */
			return (i);
	}

	/* Val not found, return -1 */
	return (-1);
}
