#include <stdio.h>
#include "main.h"

/**
 * main - prints num of arg passed to the program
 * @argc: indicates num of arg
 * @argv: indicates array of arg
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

