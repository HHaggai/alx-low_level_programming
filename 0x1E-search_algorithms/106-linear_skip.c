#include "search_algos.h"

/**
 * linear_skip - Searches for a val in a sorted singly linkd list
 *               of integrs using linear skip.
 * @list: A pointr to head of the linkd list to search.
 * @value: The val to search for.
 *
 * Return: If val is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointr to the first node where the val is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	/* Check if list is NULL */
	if (list == NULL)
		return (NULL);

	/* Perform linear skip */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		/* Store the prev jump node */
		node = jump;

		/* If express lane is available */
		if (jump->express != NULL)
		{
			/* Jump to next express node */
			jump = jump->express;

			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		}
		else
		{
			/* Traverse to end of the list */
			while (jump->next != NULL)
				/* Move to next node in the list */
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	/*  performs linear search, checking each */
	/*  node's val to find target val */
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
