#include "main.h"

/**
 * clear_bit - sets val of givn bit to 0
 * @n: pointr to the num to change
 * @index: indx of bit to clear
 *
 * Return: 1 for succes, -1 for failre
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

