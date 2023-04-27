#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new nod at the beg of a linkd list
 * @head: doubl pointr to the list_t lst
 * @str: new strng to add in the nod
 *
 * Return: addrs of the new elem, or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

