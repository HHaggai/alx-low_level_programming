#include "search_algos.h"
/**
  * _binary_search - Searches for a val in a sorted arr
  *                  of integrs using binary search.
  * @array: A pointr to first element of arr to search.
  * @left: The starting index of the [sub]arr to search.
  * @right: The ending index of the [sub]arr to search.
  * @value: The val to search for.
  *
  * Return: If val is not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* Check if the arr is NULL */
	if (array == NULL)
		return (-1);

	while (right >= left)
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
		/* If the middle element is greater than the val */
		if (array[i] > value)
			/* Update the right boundary */
			right = i - 1;
		else
			/* Otherwise, update the left boundary */
			left = i + 1;
	}

	/* Value not found, return -1 */
	return (-1);
}

/**
  * exponential_search - Searches for val in a sorted arr
  *                      of integrs using exponential search.
  * @array: A pointr to first element of arr to search.
  * @size: The numb of elements in the arr.
  * @value: The val to search for.
  *
  * Return: If val is not present or the arr is NULL, -1.
  *         Otherwise, index where val is located.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	/* Check if arr is NULL */
	if (array == NULL)
		return (-1);
	/* Perform exponential search if first element is not the target val */
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	/* Determine range where the val is expected to be found */
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	/* Perform binary search within identifd range */
	return (_binary_search(array, i / 2, right, value));
}
