#include "main.h"

/**
 * get_bit - ret value of a bit at an index in a dec num
 * @n: numr to search
 * @index: indx of the bit
 *
 * Return: val of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

