#include "main.h"

/**
 * binary_to_uint - Convrts a binry num to an unsigned int.
 * @b: A pointr to a strng of 0 and 1 chars.
 *
 * Return: If b is NULL or cont chars not 0 or 1 - 0.
 *         Otherwise - the convrtd num.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
