#include <stdio.h>
#include "main.h"

/**
 * main - this prints all the arg it receives
 * @argc:indicates numb of arg
 * @argv: indicates array of arg
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

