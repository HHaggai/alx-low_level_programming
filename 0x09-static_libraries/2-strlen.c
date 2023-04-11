#include "main.h"
/**
 * _strlen - this returns the length of a string
 * @s: is the string
 * Return: is the length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

