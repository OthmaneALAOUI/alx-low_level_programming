#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The total number of integers to be summed.
 * @...: A list of integers to be added.
 *
 * Return: If n is 0, the function returns 0.
 * Otherwise, it returns the sum of the provided integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum = 0;
	int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);

	return (sum);
}
