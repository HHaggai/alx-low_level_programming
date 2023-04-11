#include "main.h"
/**
 * _puts - this prints a string, then followed by a new line, to stdout
 * @str: which is the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

