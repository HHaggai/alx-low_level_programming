#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills mem with a const byte
 * @s: mem area to be filled
 * @b: char to copy
 * @n: num of times to copy b
 *
 * Return: point to mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - alloc mem for an array
 * @nmemb: num of elements in the array
 * @size: size of each element
 *
 * Return: point to allocated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

