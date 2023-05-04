#include "main.h"

/**
 * get_endianness - checks i machin is litl or big endian
 * Return: 0 for big, 1 for litl
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

