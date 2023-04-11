#include "main.h"
/**
 * _memset - fills a block of memory with a given value
 * @s: this is the starting address of memory to be filled
 * @b: which is the desired value
 * @n: which is the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

