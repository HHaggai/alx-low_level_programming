#include "lists.h"

/**
 * print_listint - prnts all the elem of a lnkd list
 * @h: lnkd list of typ listint_t to prnt
 *
 * Return: num of nod
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

