#include "search_algos.h"

/**
 * jump_list - Searches for a val in a sortd singly linked list
 *             of integrs using jump search.
 * @list: A pointr to the head of the linked list to search.
 * @size: The numb of nodes in the list.
 * @value: The val to search for.
 *
 * Return: If the val is not present or head of list is NULL, NULL.
 *         Otherwise, a pointr to first node where the val is locatd.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	/* Check if list is NULL or empty */
	if (list == NULL || size == 0)
		return (NULL);

	step = 0;

	/* Calc jump step size */
	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		/* Stores prev jump node */
		node = jump;

		for (step += step_size; jump->index < step; jump = jump->next)
		{
			/* If reached the end of the list */
			if (jump->index + 1 == size)
				break;
		}

		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
