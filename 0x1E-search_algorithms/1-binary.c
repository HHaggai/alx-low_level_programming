#include "search_algos.h"

/**
 * binary_search - Searches for val in a sorted arr
 *                 of integrs using binry search.
 * @array: A pointr to the first element of the arr to search.
 * @size: The numb of elements in the arr.
 * @value: The val to search for.
 *
 * Return: If the val is not present or the arr is NULL, -1.
 *         Otherwise, the index where the val is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Check if the arr is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* Calc the middle index */
		i = left + (right - left) / 2;

		/* If the middle element is the val */
		if (array[i] == value)
			/* Return the index */
			return (i);

		/* If the middle elem is greater than the val */
		if (array[i] > value)
			/* Update right boundary */
			right = i - 1;
		else
			/* Otherwise, update left boundary */
			left = i + 1;
	}
	/* Val not found, return -1 */
	return (-1);
}
