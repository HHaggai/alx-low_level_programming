#include "main.h"
/**
 * _strncpy - iss the copy a string
 * @dest: which is the input value
 * @src: which is the input value
 * @n: which is the input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

