#include "lists.h"

/**
 * insert_nodeint_at_index - insrts a new nod in a linkd list,
 * within a givn positon
 * @head: pointr to first nod in the lst
 * @idx: indx in which the new nod is added
 * @n: data to insrt in the new nod
 *
 * Return: pointr to new nod, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

