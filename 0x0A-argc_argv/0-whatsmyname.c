#include <stdio.h>
#include "main.h"

/**
 * main - this prints name of the program
 * @argc: indicates number of arguments
 * @argv: indicates array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

