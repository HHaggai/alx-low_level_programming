#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints str, folld by  new line.
 * @separator: str to be printd betwn strs.
 * @n: num of strs passd to the funct.
 * @...: A var numb of strs to be printd.
 *
 * Description: If separtr is NULL, it is not printd.
 *              If one of the strs if NULL, (nil) is printd instd.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

