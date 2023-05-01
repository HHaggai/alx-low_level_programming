#include "lists.h"

/**
 * add_nodeint - adds a new nod at the beg of a lnkd list
 * @head: pointr to the first nod in the lst
 * @n: data to insrt in the new nod
 *
 * Return: pointr to the new nod, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

