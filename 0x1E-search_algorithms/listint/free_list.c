#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - Deallocats a singly linked list
 *
 * @list: Pointr to linkd list to be freed
 */
void free_list(listint_t *list)
{
        listint_t *node;

        if (list)
        {
                node = list->next;
                free(list);
                free_list(node);
        }
}
