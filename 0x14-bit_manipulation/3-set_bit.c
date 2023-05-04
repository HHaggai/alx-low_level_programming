#include "main.h"

/**
 * set_bit - sets bit at a givn indx to 1
 * @n: pointr to the num to change
 * @index: indx of bit to set to 1
 *
 * Return: 1 for succes, -1 for failre
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

