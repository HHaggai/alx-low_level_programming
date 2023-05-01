#include "lists.h"

/**
 * listint_len - ret the num of elem in a lnkd lsts
 * @h: lnkd lst of typ listint_t to travers
 *
 * Return: num of nod
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

