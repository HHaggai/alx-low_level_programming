#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for a val in a sorted
 *                             arr of integrs using binary search.
 * @array: A pointr to first element of the [sub]array to search.
 * @left: The starting index of [sub]array to search.
 * @right: The ending index of [sub]array to search.
 * @value: The val to search for.
 *
 * Return: If the val is not present, -1.
 *         Otherwise, the index where the val is located.
 *
 * Description: Prints [sub]arr being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* If the right boundary is less than left boundary */
	if (right < left)
		/* Val not found, return -1 */
		return (-1);

	printf("Searching in array: ");

	/* Prnt [sub]array being searched */
	for (i = left; i < right; i++)

		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
	/* Calc the middle index */
	i = left + (right - left) / 2;

	/* If the middle element is the val and it's first occurrence */
	if (array[i] == value && (i == left || array[i - 1] != value))
		/* Return the index */
		return (i);

	/* If the middle element is greater than or equal to the val */
	if (array[i] >= value)
		/* Recursively search left subarr */
		return (advanced_binary_recursive(array, left, i, value));
	/* Recursively search the right subarr */
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a val in a sorted arr
 *                   of integrs using advanced binary search.
 * @array: A pointr to first element of the arr to search.
 * @size: The numb of elements in the arr.
 * @value: The val to search for.
 *
 * Return: If the val is not present or the arr is NULL, -1.
 *         Otherwise, the first index where the val is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* Check if the arr is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);
	/* Cal recursive funct */
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
