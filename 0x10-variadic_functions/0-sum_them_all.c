#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Ret the sum of all its param.
 * @n: The num of param pasd to the funct.
 * @...: A var numb of param to calc the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all param.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

