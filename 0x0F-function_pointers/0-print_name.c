#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prt nam with pointer to funct
 * @name: str to add
 * @f: pointer to funct
 * Return: noth
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

