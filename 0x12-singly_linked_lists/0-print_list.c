#include <stdio.h>
#include "lists.h"

/**
 * print_list - prnts all the elmnts of a linkd lst
 * @h: pointr to list_t lst to prnt
 *
 * Return: the numbs of nodes prnted
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

