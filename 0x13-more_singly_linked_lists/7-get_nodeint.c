#include "lists.h"

/**
 * get_nodeint_at_index - ret the nod at a cert index in a linkd list
 * @head: first nod in the lnked list
 * @index: indx of the nod to ret
 *
 * Return: pointr to the nod being looked for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

